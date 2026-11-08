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

// Function: entry_001083d8
// Address: 0x1083d8 - 0x108404
void entry_001083d8_0x1083d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001083d8_0x1083d8");
#endif

    ctx->pc = 0x1083d8u;

    // 0x1083d8: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1083d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1083dc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1083DCu;
    {
        const bool branch_taken_0x1083dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083DCu;
        // 0x1083e0: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083dc) {
            ctx->pc = 0x108404u;
            return;
        }
    }
    ctx->pc = 0x1083E4u;
    // 0x1083e4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1083e8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1083E8u;
    {
        const bool branch_taken_0x1083e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083E8u;
        // 0x1083ec: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083e8) {
            ctx->pc = 0x108404u;
            return;
        }
    }
    ctx->pc = 0x1083F0u;
    // 0x1083f0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1083F0u;
    {
        const bool branch_taken_0x1083f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083F0u;
        // 0x1083f4: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083f0) {
            ctx->pc = 0x108404u;
            return;
        }
    }
    ctx->pc = 0x1083F8u;
    // 0x1083f8: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x1083f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x1083fc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1083fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x108400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108404u;
}
