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

// Function: caseD_2
// Address: 0x133250 - 0x133270
void caseD_2_0x133250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x133250");
#endif

    ctx->pc = 0x133250u;

    // 0x133250: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133254: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133258: 0x5462003a  bnel        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x133258u;
    {
        const bool branch_taken_0x133258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133258) {
            ctx->pc = 0x13325Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133258u;
            // 0x13325c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133260u;
    // 0x133260: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x133260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x133264: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x133264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x133268: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x133268u;
    {
        const bool branch_taken_0x133268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133268u;
        // 0x13326c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133268) {
            ctx->pc = 0x1332C8u;
            return;
        }
    }
    ctx->pc = 0x133270u;
}
