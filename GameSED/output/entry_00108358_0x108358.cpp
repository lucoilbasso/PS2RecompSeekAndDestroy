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

// Function: entry_00108358
// Address: 0x108358 - 0x108384
void entry_00108358_0x108358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108358_0x108358");
#endif

    ctx->pc = 0x108358u;

    // 0x108358: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x108358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10835c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10835Cu;
    {
        const bool branch_taken_0x10835c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10835Cu;
        // 0x108360: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10835c) {
            ctx->pc = 0x108384u;
            return;
        }
    }
    ctx->pc = 0x108364u;
    // 0x108364: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x108364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x108368: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108368u;
    {
        const bool branch_taken_0x108368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108368u;
        // 0x10836c: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108368) {
            ctx->pc = 0x108384u;
            return;
        }
    }
    ctx->pc = 0x108370u;
    // 0x108370: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108370u;
    {
        const bool branch_taken_0x108370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108370u;
        // 0x108374: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108370) {
            ctx->pc = 0x108384u;
            return;
        }
    }
    ctx->pc = 0x108378u;
    // 0x108378: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x108378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x10837c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10837cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x108380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108384u;
}
