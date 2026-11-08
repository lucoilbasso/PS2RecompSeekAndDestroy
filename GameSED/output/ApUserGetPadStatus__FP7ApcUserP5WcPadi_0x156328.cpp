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

// Function: ApUserGetPadStatus__FP7ApcUserP5WcPadi
// Address: 0x156328 - 0x156410
void ApUserGetPadStatus__FP7ApcUserP5WcPadi_0x156328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserGetPadStatus__FP7ApcUserP5WcPadi_0x156328");
#endif

    ctx->pc = 0x156328u;

    // 0x156328: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x156328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15632c: 0x3c0a0021  lui         $t2, 0x21
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)33 << 16));
    // 0x156330: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x156330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x156334: 0x254aa0a0  addiu       $t2, $t2, -0x5F60
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942880));
    // 0x156338: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x15633c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x15633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x156340: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x156344: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x156348: 0x94c90020  lhu         $t1, 0x20($a2)
    ctx->pc = 0x156348u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15634c: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x15634cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x156350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156354: 0x90430013  lbu         $v1, 0x13($v0)
    ctx->pc = 0x156354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x156358: 0x312b2000  andi        $t3, $t1, 0x2000
    ctx->pc = 0x156358u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8192);
    // 0x15635c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x156360: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x156364: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x156368: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x156368u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x15636c: 0x90470010  lbu         $a3, 0x10($v0)
    ctx->pc = 0x15636cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x156370: 0x31221000  andi        $v0, $t1, 0x1000
    ctx->pc = 0x156370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x156374: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15637c: 0xcb280b  movn        $a1, $a2, $t3
    ctx->pc = 0x15637cu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x156380: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x156380u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x156384: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x156384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x156388: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x15638c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x15638cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156390: 0x31238000  andi        $v1, $t1, 0x8000
    ctx->pc = 0x156390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x156394: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x156394u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156398: 0x24a2fff9  addiu       $v0, $a1, -0x7
    ctx->pc = 0x156398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x15639c: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x15639cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x1563a0: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x1563a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x1563a4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1563a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1563a8: 0x31234000  andi        $v1, $t1, 0x4000
    ctx->pc = 0x1563a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16384);
    // 0x1563ac: 0x24c2fff9  addiu       $v0, $a2, -0x7
    ctx->pc = 0x1563acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967289));
    // 0x1563b0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1563b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1563b4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1563b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1563b8: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1563b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1563bc: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x1563bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1563c0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1563c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1563c4: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x1563c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x1563c8: 0x16b280b  movn        $a1, $t3, $t3
    ctx->pc = 0x1563c8u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 11));
    // 0x1563cc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1563ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1563d0: 0x4c300b  movn        $a2, $v0, $t4
    ctx->pc = 0x1563d0u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1563d4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1563d8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x1563d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1563dc: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x1563dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1563e0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1563e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1563e4: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x1563e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x1563e8: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1563e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1563ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1563ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1563f0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1563f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1563f4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1563f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1563f8: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1563f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1563fc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1563fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x156400: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x156400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x156404: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x156404u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x156408: 0x3e00008  jr          $ra
    ctx->pc = 0x156408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156408u;
        // 0x15640c: 0x1221025  or          $v0, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156410u;
}
