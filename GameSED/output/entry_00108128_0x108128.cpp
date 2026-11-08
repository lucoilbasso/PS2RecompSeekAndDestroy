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

// Function: entry_00108128
// Address: 0x108128 - 0x108154
void entry_00108128_0x108128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108128_0x108128");
#endif

    ctx->pc = 0x108128u;

    // 0x108128: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10812c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10812Cu;
    {
        const bool branch_taken_0x10812c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10812Cu;
        // 0x108130: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10812c) {
            ctx->pc = 0x108154u;
            return;
        }
    }
    ctx->pc = 0x108134u;
    // 0x108134: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x108134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x108138: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108138u;
    {
        const bool branch_taken_0x108138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108138) {
            ctx->pc = 0x108154u;
            return;
        }
    }
    ctx->pc = 0x108140u;
    // 0x108140: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108140u;
    {
        const bool branch_taken_0x108140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108140u;
        // 0x108144: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108140) {
            ctx->pc = 0x108154u;
            return;
        }
    }
    ctx->pc = 0x108148u;
    // 0x108148: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x108148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x10814c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10814cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x108150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108154u;
}
