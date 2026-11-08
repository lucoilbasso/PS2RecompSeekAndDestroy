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

// Function: entry_0019cd74
// Address: 0x19cd74 - 0x19cda8
void entry_0019cd74_0x19cd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd74_0x19cd74");
#endif

    ctx->pc = 0x19cd74u;

    // 0x19cd74: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CD74u;
    {
        const bool branch_taken_0x19cd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x19cd74) {
            ctx->pc = 0x19CDC4u;
            return;
        }
    }
    ctx->pc = 0x19CD7Cu;
    // 0x19cd7c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19cd80: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x19cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19cd84: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x19cd84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19cd88: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19CD88u;
    {
        const bool branch_taken_0x19cd88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cd88) {
            ctx->pc = 0x19CDC4u;
            return;
        }
    }
    ctx->pc = 0x19CD90u;
    // 0x19cd90: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x19cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19cd94: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19CD94u;
    {
        const bool branch_taken_0x19cd94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cd94) {
            ctx->pc = 0x19CDC4u;
            return;
        }
    }
    ctx->pc = 0x19CD9Cu;
    // 0x19cd9c: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x19cd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19cda0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19cda4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19cda4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19cda8u;
}
