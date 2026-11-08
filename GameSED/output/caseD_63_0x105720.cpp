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

// Function: caseD_63
// Address: 0x105720 - 0x105798
void caseD_63_0x105720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_63_0x105720");
#endif

    ctx->pc = 0x105720u;

    // 0x105720: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x105720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105724: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x105724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x105728: 0x344200b0  ori         $v0, $v0, 0xB0
    ctx->pc = 0x105728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x10572c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x10572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x105730: 0x34639a40  ori         $v1, $v1, 0x9A40
    ctx->pc = 0x105730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39488);
    // 0x105734: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x105734u;
    runtime->Store64(rdram, ctx, 0x120000B0u, GPR_U64(ctx, 3));
    // 0x105738: 0x3c095f80  lui         $t1, 0x5F80
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24448 << 16));
    // 0x10573c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x10573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x105740: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x105740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x105744: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x105744u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
    // 0x105748: 0x3508007f  ori         $t0, $t0, 0x7F
    ctx->pc = 0x105748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)127);
    // 0x10574c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x10574cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x105750: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x105750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x105754: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x105754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x105758: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x105758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x10575c: 0x34a500d0  ori         $a1, $a1, 0xD0
    ctx->pc = 0x10575cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)208);
    // 0x105760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105764: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x105764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x105768: 0x224c2  srl         $a0, $v0, 19
    ctx->pc = 0x105768u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
    // 0x10576c: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x10576cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x105770: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x105770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x105774: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x105774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x105778: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x105778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x10577c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x105780: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x105780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x105784: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x105784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x105788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x105788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10578c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x10578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x105790: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x105790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x105794: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x105794u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x105798u;
}
