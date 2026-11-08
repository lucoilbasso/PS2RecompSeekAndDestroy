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

// Function: entry_00177758
// Address: 0x177758 - 0x1777b0
void entry_00177758_0x177758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177758_0x177758");
#endif

    ctx->pc = 0x177758u;

    // 0x177758: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17775c: 0x95040008  lhu         $a0, 0x8($t0)
    ctx->pc = 0x17775cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x177760: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x177764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x177764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177768: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x177768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17776c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x17776cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x177770: 0xa504001a  sh          $a0, 0x1A($t0)
    ctx->pc = 0x177770u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x177774: 0x90e20036  lbu         $v0, 0x36($a3)
    ctx->pc = 0x177774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 54)));
    // 0x177778: 0x90e30037  lbu         $v1, 0x37($a3)
    ctx->pc = 0x177778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 55)));
    // 0x17777c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17777cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x177780: 0x621827  nor         $v1, $v1, $v0
    ctx->pc = 0x177780u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 2)));
    // 0x177784: 0x14a60042  bne         $a1, $a2, . + 4 + (0x42 << 2)
    ctx->pc = 0x177784u;
    {
        const bool branch_taken_0x177784 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x177788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177784u;
        // 0x177788: 0xa5030008  sh          $v1, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177784) {
            ctx->pc = 0x177890u;
            return;
        }
    }
    ctx->pc = 0x17778Cu;
    // 0x17778c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x17778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x177790: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x177790u;
    {
        const bool branch_taken_0x177790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177790u;
        // 0x177794: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177790) {
            ctx->pc = 0x17786Cu;
            return;
        }
    }
    ctx->pc = 0x177798u;
    // 0x177798: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177798u;
    {
        const bool branch_taken_0x177798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177798u;
        // 0x17779c: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177798) {
            ctx->pc = 0x1777E8u;
            return;
        }
    }
    ctx->pc = 0x1777A0u;
    // 0x1777a0: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1777a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1777a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1777a8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1777ac: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1777acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1777b0u;
}
