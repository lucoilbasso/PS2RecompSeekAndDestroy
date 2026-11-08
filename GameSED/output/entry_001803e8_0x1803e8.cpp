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

// Function: entry_001803e8
// Address: 0x1803e8 - 0x180458
void entry_001803e8_0x1803e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001803e8_0x1803e8");
#endif

    ctx->pc = 0x1803e8u;

    // 0x1803e8: 0x91a6000c  lbu         $a2, 0xC($t5)
    ctx->pc = 0x1803e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1803ec: 0x95840004  lhu         $a0, 0x4($t4)
    ctx->pc = 0x1803ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1803f0: 0x95850006  lhu         $a1, 0x6($t4)
    ctx->pc = 0x1803f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x1803f4: 0x63842  srl         $a3, $a2, 1
    ctx->pc = 0x1803f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1803f8: 0x95830008  lhu         $v1, 0x8($t4)
    ctx->pc = 0x1803f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1803fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180400: 0x9582000a  lhu         $v0, 0xA($t4)
    ctx->pc = 0x180400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x180404: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180408: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18040c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x180410: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180414: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x180414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x180418: 0x3044021  addu        $t0, $t8, $a0
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x18041c: 0x3052821  addu        $a1, $t8, $a1
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x180420: 0x3034821  addu        $t1, $t8, $v1
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x180424: 0x14c00070  bnez        $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x180424u;
    {
        const bool branch_taken_0x180424 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x180428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180424u;
        // 0x180428: 0x2225021  addu        $t2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180424) {
            ctx->pc = 0x1805E8u;
            return;
        }
    }
    ctx->pc = 0x18042Cu;
    // 0x18042c: 0x50e0006f  beql        $a3, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x18042Cu;
    {
        const bool branch_taken_0x18042c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18042c) {
            ctx->pc = 0x180430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18042Cu;
            // 0x180430: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805ECu;
            return;
        }
    }
    ctx->pc = 0x180434u;
    // 0x180434: 0x46076032  c.eq.s      $f12, $f7
    ctx->pc = 0x180434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180438: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x180438u;
    {
        const bool branch_taken_0x180438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180438) {
            ctx->pc = 0x180458u;
            return;
        }
    }
    ctx->pc = 0x180440u;
    // 0x180440: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x180440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180444: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x180444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180448: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x180448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x18044c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18044cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180450: 0x45030066  bc1tl       . + 4 + (0x66 << 2)
    ctx->pc = 0x180450u;
    {
        const bool branch_taken_0x180450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180450) {
            ctx->pc = 0x180454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180450u;
            // 0x180454: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805ECu;
            return;
        }
    }
    ctx->pc = 0x180458u;
}
