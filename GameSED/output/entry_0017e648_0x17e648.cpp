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

// Function: entry_0017e648
// Address: 0x17e648 - 0x17e6a0
void entry_0017e648_0x17e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e648_0x17e648");
#endif

    ctx->pc = 0x17e648u;

    // 0x17e648: 0x9502002c  lhu         $v0, 0x2C($t0)
    ctx->pc = 0x17e648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x17e64c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x17e650: 0x95070018  lhu         $a3, 0x18($t0)
    ctx->pc = 0x17e650u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x17e654: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x17e654u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17e658: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x17e65c: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x17e65cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17e660: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17e660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17e664: 0x9505001a  lhu         $a1, 0x1A($t0)
    ctx->pc = 0x17e664u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x17e668: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x17e668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x17e66c: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x17e66cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x17e670: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x17e670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x17e674: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x17e674u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e678: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e67c: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x17e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x17e680: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x17e680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x17e684: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x17e684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17e688: 0x9503002e  lhu         $v1, 0x2E($t0)
    ctx->pc = 0x17e688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
    // 0x17e68c: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x17e68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x17e690: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17e694: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x17e698: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17e698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17e69c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->pc = 0x17e6a0u;
}
