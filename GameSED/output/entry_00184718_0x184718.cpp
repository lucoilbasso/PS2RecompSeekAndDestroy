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

// Function: entry_00184718
// Address: 0x184718 - 0x184748
void entry_00184718_0x184718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184718_0x184718");
#endif

    ctx->pc = 0x184718u;

    // 0x184718: 0x25c50010  addiu       $a1, $t6, 0x10
    ctx->pc = 0x184718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x18471c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x184720: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x184720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x184724: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x184724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x184728: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x184728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18472c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x184730: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x184730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x184734: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x184734u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x184738: 0xfdc40008  sd          $a0, 0x8($t6)
    ctx->pc = 0x184738u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 4));
    // 0x18473c: 0x25d80020  addiu       $t8, $t6, 0x20
    ctx->pc = 0x18473cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x184740: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x184740u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x184744: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x184744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x184748u;
}
