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

// Function: entry_0018d170
// Address: 0x18d170 - 0x18d1a8
void entry_0018d170_0x18d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d170_0x18d170");
#endif

    ctx->pc = 0x18d170u;

    // 0x18d170: 0x12020205  beq         $s0, $v0, . + 4 + (0x205 << 2)
    ctx->pc = 0x18D170u;
    {
        const bool branch_taken_0x18d170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D170u;
        // 0x18d174: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d170) {
            ctx->pc = 0x18D988u;
            return;
        }
    }
    ctx->pc = 0x18D178u;
    // 0x18d178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18D178u;
    {
        const bool branch_taken_0x18d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D178u;
        // 0x18d17c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d178) {
            ctx->pc = 0x18D1B8u;
            return;
        }
    }
    ctx->pc = 0x18D180u;
    // 0x18d180: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18d184: 0x12020264  beq         $s0, $v0, . + 4 + (0x264 << 2)
    ctx->pc = 0x18D184u;
    {
        const bool branch_taken_0x18d184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D184u;
        // 0x18d188: 0x2a02000b  slti        $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d184) {
            ctx->pc = 0x18DB18u;
            return;
        }
    }
    ctx->pc = 0x18D18Cu;
    // 0x18d18c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D18Cu;
    {
        const bool branch_taken_0x18d18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d18c) {
            ctx->pc = 0x18D1A8u;
            return;
        }
    }
    ctx->pc = 0x18D194u;
    // 0x18d194: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d198: 0x12020285  beq         $s0, $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x18D198u;
    {
        const bool branch_taken_0x18d198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D198u;
        // 0x18d19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d198) {
            ctx->pc = 0x18DBB0u;
            return;
        }
    }
    ctx->pc = 0x18D1A0u;
    // 0x18d1a0: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x18D1A0u;
    {
        const bool branch_taken_0x18d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A0u;
        // 0x18d1a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1a0) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18D1A8u;
}
