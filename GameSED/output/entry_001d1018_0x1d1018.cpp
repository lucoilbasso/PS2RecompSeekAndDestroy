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

// Function: entry_001d1018
// Address: 0x1d1018 - 0x1d1048
void entry_001d1018_0x1d1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1018_0x1d1018");
#endif

    ctx->pc = 0x1d1018u;

    // 0x1d1018: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1d1018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d101c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D101Cu;
    {
        const bool branch_taken_0x1d101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d101c) {
            ctx->pc = 0x1D10A8u;
            return;
        }
    }
    ctx->pc = 0x1D1024u;
    // 0x1d1024: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1024u;
    {
        const bool branch_taken_0x1d1024 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1D1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1024u;
        // 0x1d1028: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1024) {
            ctx->pc = 0x1D1048u;
            return;
        }
    }
    ctx->pc = 0x1D102Cu;
    // 0x1d102c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D102Cu;
    {
        const bool branch_taken_0x1d102c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d102c) {
            ctx->pc = 0x1D1030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D102Cu;
            // 0x1d1030: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1060u;
            return;
        }
    }
    ctx->pc = 0x1D1034u;
    // 0x1d1034: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x1D1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1034u;
        // 0x1d1038: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D1050u;
            return;
        }
    }
    ctx->pc = 0x1D103Cu;
    // 0x1d103c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x1d103cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d1040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1040u;
    {
        const bool branch_taken_0x1d1040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1040) {
            ctx->pc = 0x1D1050u;
            return;
        }
    }
    ctx->pc = 0x1D1048u;
}
