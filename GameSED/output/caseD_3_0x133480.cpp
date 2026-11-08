#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_3
// Address: 0x133480 - 0x1334a0
void caseD_3_0x133480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x133480");
#endif

    ctx->pc = 0x133480u;

    // 0x133480: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x133480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x133484: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x133484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x133488: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13348c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x13348cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133490: 0x54640305  bnel        $v1, $a0, . + 4 + (0x305 << 2)
    ctx->pc = 0x133490u;
    {
        const bool branch_taken_0x133490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x133490) {
            ctx->pc = 0x133494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133490u;
            // 0x133494: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133498u;
    // 0x133498: 0x100002fd  b           . + 4 + (0x2FD << 2)
    ctx->pc = 0x133498u;
    {
        const bool branch_taken_0x133498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133498u;
        // 0x13349c: 0xc4400190  lwc1        $f0, 0x190($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133498) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x1334A0u;
}
