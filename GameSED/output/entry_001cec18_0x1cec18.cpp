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

// Function: entry_001cec18
// Address: 0x1cec18 - 0x1cec60
void entry_001cec18_0x1cec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cec18_0x1cec18");
#endif

    ctx->pc = 0x1cec18u;

    // 0x1cec18: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1cec18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1cec1c: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x1cec1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1cec20: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1cec20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1cec24: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CEC24u;
    {
        const bool branch_taken_0x1cec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC24u;
        // 0x1cec28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec24) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEC2Cu;
    // 0x1cec2c: 0x32640002  andi        $a0, $s3, 0x2
    ctx->pc = 0x1cec2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1cec30: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1cec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x1cec34: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1cec34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cec38: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CEC38u;
    {
        const bool branch_taken_0x1cec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC38u;
        // 0x1cec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec38) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEC40u;
    // 0x1cec40: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEC40u;
    {
        const bool branch_taken_0x1cec40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cec40) {
            ctx->pc = 0x1CEC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEC40u;
            // 0x1cec44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEC60u;
            return;
        }
    }
    ctx->pc = 0x1CEC48u;
    // 0x1cec48: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1cec48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1cec4c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CEC4Cu;
    {
        const bool branch_taken_0x1cec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC4Cu;
        // 0x1cec50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec4c) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEC54u;
    // 0x1cec54: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1cec54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cec58: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CEC58u;
    {
        const bool branch_taken_0x1cec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC58u;
        // 0x1cec5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec58) {
            ctx->pc = 0x1CECF8u;
            return;
        }
    }
    ctx->pc = 0x1CEC60u;
}
