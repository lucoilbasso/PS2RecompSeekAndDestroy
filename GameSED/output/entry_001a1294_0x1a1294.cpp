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

// Function: entry_001a1294
// Address: 0x1a1294 - 0x1a12c0
void entry_001a1294_0x1a1294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1294_0x1a1294");
#endif

    ctx->pc = 0x1a1294u;

    // 0x1a1294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a129c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a12a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a12a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a12a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a12ac: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A12ACu;
    {
        const bool branch_taken_0x1a12ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12ACu;
        // 0x1a12b0: 0x2442e530  addiu       $v0, $v0, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12ac) {
            ctx->pc = 0x1A134Cu;
            return;
        }
    }
    ctx->pc = 0x1A12B4u;
    // 0x1a12b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a12b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12b8: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a12bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a12c0u;
}
