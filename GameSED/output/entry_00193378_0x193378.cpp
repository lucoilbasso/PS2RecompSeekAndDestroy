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

// Function: entry_00193378
// Address: 0x193378 - 0x1933a4
void entry_00193378_0x193378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193378_0x193378");
#endif

    ctx->pc = 0x193378u;

    // 0x193378: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19337c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x193380: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x193380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x193384: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x193388: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x19338c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x193390: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x193390u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x193394: 0x25270020  addiu       $a3, $t1, 0x20
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x193398: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x193398u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x19339c: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x19339cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x1933a0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1933a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1933a4u;
}
