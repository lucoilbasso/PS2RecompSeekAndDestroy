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

// Function: entry_001bc878
// Address: 0x1bc878 - 0x1bc8a0
void entry_001bc878_0x1bc878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc878_0x1bc878");
#endif

    ctx->pc = 0x1bc878u;

    // 0x1bc878: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BC878u;
    {
        const bool branch_taken_0x1bc878 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x1bc878) {
            ctx->pc = 0x1BC87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC878u;
            // 0x1bc87c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            return;
        }
    }
    ctx->pc = 0x1BC880u;
    // 0x1bc880: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1bc880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc884: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x1bc884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1bc888: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BC888u;
    {
        const bool branch_taken_0x1bc888 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc888) {
            ctx->pc = 0x1BC88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC888u;
            // 0x1bc88c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            return;
        }
    }
    ctx->pc = 0x1BC890u;
    // 0x1bc890: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1bc890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1bc894: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc898: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BC898u;
    {
        const bool branch_taken_0x1bc898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC898u;
        // 0x1bc89c: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc898) {
            ctx->pc = 0x1BC960u;
            return;
        }
    }
    ctx->pc = 0x1BC8A0u;
}
