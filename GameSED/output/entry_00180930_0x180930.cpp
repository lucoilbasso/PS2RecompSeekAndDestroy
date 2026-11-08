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

// Function: entry_00180930
// Address: 0x180930 - 0x1809d8
void entry_00180930_0x180930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180930_0x180930");
#endif

    ctx->pc = 0x180930u;

    // 0x180930: 0x91a3000c  lbu         $v1, 0xC($t5)
    ctx->pc = 0x180930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x180934: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x180938: 0x544000a6  bnel        $v0, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x180938u;
    {
        const bool branch_taken_0x180938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180938) {
            ctx->pc = 0x18093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180938u;
            // 0x18093c: 0x97020002  lhu         $v0, 0x2($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180BD4u;
            return;
        }
    }
    ctx->pc = 0x180940u;
    // 0x180940: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x180944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x180948: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x180948u;
    {
        const bool branch_taken_0x180948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180948) {
            ctx->pc = 0x18094Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180948u;
            // 0x18094c: 0x97020002  lhu         $v0, 0x2($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180BD4u;
            return;
        }
    }
    ctx->pc = 0x180950u;
    // 0x180950: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x180950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180954: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x180954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180958: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x18095c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18095cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180960: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x180960u;
    {
        const bool branch_taken_0x180960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180960u;
        // 0x180964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180960) {
            ctx->pc = 0x180A04u;
            return;
        }
    }
    ctx->pc = 0x180968u;
    // 0x180968: 0xc5a00010  lwc1        $f0, 0x10($t5)
    ctx->pc = 0x180968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18096c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x18096cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x180970: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180974: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x180974u;
    {
        const bool branch_taken_0x180974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180974) {
            ctx->pc = 0x180978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180974u;
            // 0x180978: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            return;
        }
    }
    ctx->pc = 0x18097Cu;
    // 0x18097c: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x18097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180980: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x180980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180984: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18098c: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x18098Cu;
    {
        const bool branch_taken_0x18098c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18098c) {
            ctx->pc = 0x180990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18098Cu;
            // 0x180990: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            return;
        }
    }
    ctx->pc = 0x180994u;
    // 0x180994: 0xc5a00018  lwc1        $f0, 0x18($t5)
    ctx->pc = 0x180994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180998: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x18099c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18099cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809a0: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1809A0u;
    {
        const bool branch_taken_0x1809a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1809a0) {
            ctx->pc = 0x1809A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809A0u;
            // 0x1809a4: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            return;
        }
    }
    ctx->pc = 0x1809A8u;
    // 0x1809a8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1809A8u;
    {
        const bool branch_taken_0x1809a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809A8u;
        // 0x1809ac: 0xc5a00004  lwc1        $f0, 0x4($t5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809a8) {
            ctx->pc = 0x1809D8u;
            return;
        }
    }
    ctx->pc = 0x1809B0u;
    // 0x1809b0: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x1809b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1809b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1809b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809b8: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1809B8u;
    {
        const bool branch_taken_0x1809b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1809b8) {
            ctx->pc = 0x1809BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809B8u;
            // 0x1809bc: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            return;
        }
    }
    ctx->pc = 0x1809C0u;
    // 0x1809c0: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x1809c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1809c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1809c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809c8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1809C8u;
    {
        const bool branch_taken_0x1809c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1809c8) {
            ctx->pc = 0x1809CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809C8u;
            // 0x1809cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A04u;
            return;
        }
    }
    ctx->pc = 0x1809D0u;
    // 0x1809d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1809D0u;
    {
        const bool branch_taken_0x1809d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809D0u;
        // 0x1809d4: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809d0) {
            ctx->pc = 0x180A08u;
            return;
        }
    }
    ctx->pc = 0x1809D8u;
}
