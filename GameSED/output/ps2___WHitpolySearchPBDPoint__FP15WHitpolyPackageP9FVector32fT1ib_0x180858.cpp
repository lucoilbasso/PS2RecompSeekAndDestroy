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

// Function: __WHitpolySearchPBDPoint__FP15WHitpolyPackageP9FVector32fT1ib
// Address: 0x180858 - 0x180bfc
void ps2___WHitpolySearchPBDPoint__FP15WHitpolyPackageP9FVector32fT1ib_0x180858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___WHitpolySearchPBDPoint__FP15WHitpolyPackageP9FVector32fT1ib_0x180858");
#endif

    switch (ctx->pc) {
        case 0x180880u: goto label_180880;
        case 0x180930u: goto label_180930;
        default: break;
    }

    ctx->pc = 0x180858u;

    // 0x180858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18085c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x18085cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180860: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x180860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x180864: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x180864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180868: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x180868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x18086c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x18086cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180870: 0x17000017  bnez        $t8, . + 4 + (0x17 << 2)
    ctx->pc = 0x180870u;
    {
        const bool branch_taken_0x180870 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x180874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180870u;
        // 0x180874: 0xa0702d  daddu       $t6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180870) {
            ctx->pc = 0x1808D0u;
            goto label_1808d0;
        }
    }
    ctx->pc = 0x180878u;
    // 0x180878: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x180878u;
    {
        const bool branch_taken_0x180878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180878u;
        // 0x18087c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180878) {
            ctx->pc = 0x180BECu;
            goto label_180bec;
        }
    }
    ctx->pc = 0x180880u;
label_180880:
    // 0x180880: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x180884: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x180884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180888: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x18088c: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x18088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180890: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180894: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x180894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18089c: 0xaf270018  sw          $a3, 0x18($t9)
    ctx->pc = 0x18089cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 24), GPR_U32(ctx, 7));
    // 0x1808a0: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x1808a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1808a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1808a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1808a8: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1808a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1808ac: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1808acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1808b0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1808b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC8u, _value); } while (0); }
    // 0x1808b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1808b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1808b8: 0xac6c0010  sw          $t4, 0x10($v1)
    ctx->pc = 0x1808b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1808bc: 0xac6b0014  sw          $t3, 0x14($v1)
    ctx->pc = 0x1808bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x26DBD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD4u, _value); } while (0);
    // 0x1808c0: 0xac6a0018  sw          $t2, 0x18($v1)
    ctx->pc = 0x1808c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1808c4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1808C4u;
    {
        const bool branch_taken_0x1808c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808C4u;
        // 0x1808c8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808c4) {
            ctx->pc = 0x180BECu;
            goto label_180bec;
        }
    }
    ctx->pc = 0x1808CCu;
    // 0x1808cc: 0x0  nop
    ctx->pc = 0x1808ccu;
    // NOP
label_1808d0:
    // 0x1808d0: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1808d4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1808d8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1808dc: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x1808dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1808e0: 0x8f0d0010  lw          $t5, 0x10($t8)
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x1808e4: 0x2479dbf0  addiu       $t9, $v1, -0x2410
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958064));
    // 0x1808e8: 0x8f0f0014  lw          $t7, 0x14($t8)
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1808ec: 0x8f060018  lw          $a2, 0x18($t8)
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x1808f0: 0x8f08001c  lw          $t0, 0x1C($t8)
    ctx->pc = 0x1808f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x1808f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1808f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0);
    // 0x1808f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1808f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1808fc: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1808FCu;
    {
        const bool branch_taken_0x1808fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x180900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808FCu;
        // 0x180900: 0xa0440020  sb          $a0, 0x20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808fc) {
            ctx->pc = 0x18091Cu;
            goto label_18091c;
        }
    }
    ctx->pc = 0x180904u;
    // 0x180904: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x180908: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x18090c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x180910: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x180914: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180918: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_18091c:
    // 0x18091c: 0x97020002  lhu         $v0, 0x2($t8)
    ctx->pc = 0x18091cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x180920: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x180920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180924: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x180924u;
    {
        const bool branch_taken_0x180924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180924u;
        // 0x180928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180924) {
            ctx->pc = 0x180BECu;
            goto label_180bec;
        }
    }
    ctx->pc = 0x18092Cu;
    // 0x18092c: 0x0  nop
    ctx->pc = 0x18092cu;
    // NOP
label_180930:
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
            goto label_180bd4;
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
            goto label_180bd4;
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
            goto label_180a04;
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
            goto label_180a08;
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
            goto label_180a08;
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
            goto label_180a08;
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
            goto label_1809d8;
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
            goto label_180a08;
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
            goto label_180a04;
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
            goto label_180a08;
        }
    }
    ctx->pc = 0x1809D8u;
label_1809d8:
    // 0x1809d8: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x1809d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1809dc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1809dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1809e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1809e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809e4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1809E4u;
    {
        const bool branch_taken_0x1809e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1809E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809E4u;
        // 0x1809e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809e4) {
            ctx->pc = 0x180A04u;
            goto label_180a04;
        }
    }
    ctx->pc = 0x1809ECu;
    // 0x1809ec: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x1809ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1809f0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1809f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1809f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1809f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809f8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1809F8u;
    {
        const bool branch_taken_0x1809f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1809f8) {
            ctx->pc = 0x1809FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809F8u;
            // 0x1809fc: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            goto label_180a08;
        }
    }
    ctx->pc = 0x180A00u;
    // 0x180a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180a04:
    // 0x180a04: 0xaf22000c  sw          $v0, 0xC($t9)
    ctx->pc = 0x180a04u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
label_180a08:
    // 0x180a08: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x180A08u;
    {
        const bool branch_taken_0x180a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180a08) {
            ctx->pc = 0x180A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A08u;
            // 0x180a0c: 0x97020002  lhu         $v0, 0x2($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180BD4u;
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180A10u;
    // 0x180a10: 0xc5a00028  lwc1        $f0, 0x28($t5)
    ctx->pc = 0x180a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a14: 0x95e20004  lhu         $v0, 0x4($t7)
    ctx->pc = 0x180a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x180a18: 0xe7200010  swc1        $f0, 0x10($t9)
    ctx->pc = 0x180a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 16), bits); }
    // 0x180a1c: 0x95e40006  lhu         $a0, 0x6($t7)
    ctx->pc = 0x180a1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 6)));
    // 0x180a20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180a24: 0x95e50008  lhu         $a1, 0x8($t7)
    ctx->pc = 0x180a24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x180a28: 0xc26021  addu        $t4, $a2, $v0
    ctx->pc = 0x180a28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x180a2c: 0x95e3000a  lhu         $v1, 0xA($t7)
    ctx->pc = 0x180a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 10)));
    // 0x180a30: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x180a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180a34: 0xc5a0002c  lwc1        $f0, 0x2C($t5)
    ctx->pc = 0x180a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a38: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x180a38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180a3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180a40: 0xc45821  addu        $t3, $a2, $a0
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x180a44: 0xe7200014  swc1        $f0, 0x14($t9)
    ctx->pc = 0x180a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 20), bits); }
    // 0x180a48: 0xc55021  addu        $t2, $a2, $a1
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x180a4c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x180A4Cu;
    {
        const bool branch_taken_0x180a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A4Cu;
        // 0x180a50: 0x1034821  addu        $t1, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a4c) {
            ctx->pc = 0x180A80u;
            goto label_180a80;
        }
    }
    ctx->pc = 0x180A54u;
    // 0x180a54: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x180a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x180a58: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x180a58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180a5c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x180a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180a60: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x180a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180a64: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x180a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180a68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x180a68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x180a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x180a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180a74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a78: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
    ctx->pc = 0x180A78u;
    {
        const bool branch_taken_0x180a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180a78) {
            ctx->pc = 0x180A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A78u;
            // 0x180a7c: 0x97020002  lhu         $v0, 0x2($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180BD4u;
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180A80u;
label_180a80:
    // 0x180a80: 0x320182d  daddu       $v1, $t9, $zero
    ctx->pc = 0x180a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a84: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x180a84u;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x180a88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x180a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a8c: 0xd9660000  lqc2        $vf6, 0x0($t3)
    ctx->pc = 0x180a8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x180a90: 0xd9850000  lqc2        $vf5, 0x0($t4)
    ctx->pc = 0x180a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x180a94: 0xd9470000  lqc2        $vf7, 0x0($t2)
    ctx->pc = 0x180a94u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x180a98: 0xd9c40000  lqc2        $vf4, 0x0($t6)
    ctx->pc = 0x180a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x180a9c: 0xd9280000  lqc2        $vf8, 0x0($t1)
    ctx->pc = 0x180a9cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x180aa0: 0x4bc6296c  vsub.xyz    $vf5, $vf5, $vf6
    ctx->pc = 0x180aa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x180aa4: 0x4bc639ec  vsub.xyz    $vf7, $vf7, $vf6
    ctx->pc = 0x180aa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x180aa8: 0x4bc6212c  vsub.xyz    $vf4, $vf4, $vf6
    ctx->pc = 0x180aa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x180aac: 0x4bc00043  vaddw.xyz   $vf1, $vf0, $vf0w
    ctx->pc = 0x180aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x180ab0: 0x4bc542fe  vopmula.xyz $ACC, $vf8, $vf5
    ctx->pc = 0x180ab0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180ab4: 0x4bc82aae  vopmsub.xyz $vf10, $vf5, $vf8
    ctx->pc = 0x180ab4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x180ab8: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x180ab8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180abc: 0x4bc53aee  vopmsub.xyz $vf11, $vf7, $vf5
    ctx->pc = 0x180abcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x180ac0: 0x4bc83afe  vopmula.xyz $ACC, $vf7, $vf8
    ctx->pc = 0x180ac0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x180ac4: 0x4bc7426e  vopmsub.xyz $vf9, $vf8, $vf7
    ctx->pc = 0x180ac4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x180ac8: 0x4bcb432a  vmul.xyz    $vf12, $vf8, $vf11
    ctx->pc = 0x180ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180acc: 0x4bcb23ea  vmul.xyz    $vf15, $vf4, $vf11
    ctx->pc = 0x180accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x180ad0: 0x4bca23aa  vmul.xyz    $vf14, $vf4, $vf10
    ctx->pc = 0x180ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x180ad4: 0x4bc9236a  vmul.xyz    $vf13, $vf4, $vf9
    ctx->pc = 0x180ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x180ad8: 0x4b0c09bc  vmulax.x    $ACC, $vf1, $vf12x
    ctx->pc = 0x180ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180adc: 0x4b0c08bd  vmadday.x   $ACC, $vf1, $vf12y
    ctx->pc = 0x180adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180ae0: 0x4b0c0b0a  vmaddz.x    $vf12, $vf1, $vf12z
    ctx->pc = 0x180ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x180ae4: 0x4a8e09bc  vmulax.y    $ACC, $vf1, $vf14x
    ctx->pc = 0x180ae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x180ae8: 0x4a8e08bd  vmadday.y   $ACC, $vf1, $vf14y
    ctx->pc = 0x180ae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x180aec: 0x4a8e088a  vmaddz.y    $vf2, $vf1, $vf14z
    ctx->pc = 0x180aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180af0: 0x4a6c03bc  vdiv        $Q, $vf0w, $vf12x
    ctx->pc = 0x180af0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x180af4: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x180af4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x180af8: 0x4b0d09bc  vmulax.x    $ACC, $vf1, $vf13x
    ctx->pc = 0x180af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180afc: 0x4b0d08bd  vmadday.x   $ACC, $vf1, $vf13y
    ctx->pc = 0x180afcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x180b00: 0x4b0d088a  vmaddz.x    $vf2, $vf1, $vf13z
    ctx->pc = 0x180b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180b04: 0x4a4f09bc  vmulax.z    $ACC, $vf1, $vf15x
    ctx->pc = 0x180b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x180b08: 0x4a4f08bd  vmadday.z   $ACC, $vf1, $vf15y
    ctx->pc = 0x180b08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x180b0c: 0x4a4f088a  vmaddz.z    $vf2, $vf1, $vf15z
    ctx->pc = 0x180b0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180b10: 0x4a0003bf  vwaitq
    ctx->pc = 0x180b10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x180b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180b18: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x180b18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x180b1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x180b1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x180b20: 0xc7818564  lwc1        $f1, -0x7A9C($gp)
    ctx->pc = 0x180b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x180B28u;
    {
        const bool branch_taken_0x180b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B28u;
        // 0x180b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b28) {
            ctx->pc = 0x180B38u;
            goto label_180b38;
        }
    }
    ctx->pc = 0x180B30u;
    // 0x180b30: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x180b30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x180b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180b38:
    // 0x180b38: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x180B38u;
    {
        const bool branch_taken_0x180b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B38u;
        // 0x180b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b38) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180B40u;
    // 0x180b40: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x180b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x180b44: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x180b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b48: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x180b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180b4c: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x180b4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180b50: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x180b50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x180b54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x180b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b58: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x180B58u;
    {
        const bool branch_taken_0x180b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b58) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180B60u;
    // 0x180b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180b64: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x180b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x180b68: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x180b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x180b6c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x180b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b70: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x180B70u;
    {
        const bool branch_taken_0x180b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b70) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180B78u;
    // 0x180b78: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x180b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b7c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x180b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180b80: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x180b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180b84: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x180b84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x180b88: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x180b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b8c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x180B8Cu;
    {
        const bool branch_taken_0x180b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b8c) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180B94u;
    // 0x180b94: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x180b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x180b98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x180b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b9c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x180B9Cu;
    {
        const bool branch_taken_0x180b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b9c) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180BA4u;
    // 0x180ba4: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x180ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180ba8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x180ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x180bac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180bb0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x180BB0u;
    {
        const bool branch_taken_0x180bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180bb0) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180BB8u;
    // 0x180bb8: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x180bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180bbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x180BBCu;
    {
        const bool branch_taken_0x180bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BBCu;
        // 0x180bc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bbc) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180BC4u;
    // 0x180bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180bc8:
    // 0x180bc8: 0x5480ff2d  bnel        $a0, $zero, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x180BC8u;
    {
        const bool branch_taken_0x180bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x180bc8) {
            ctx->pc = 0x180BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180BC8u;
            // 0x180bcc: 0x8da5000c  lw          $a1, 0xC($t5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180880;
        }
    }
    ctx->pc = 0x180BD0u;
    // 0x180bd0: 0x97020002  lhu         $v0, 0x2($t8)
    ctx->pc = 0x180bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
label_180bd4:
    // 0x180bd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x180bd8: 0x25ad0030  addiu       $t5, $t5, 0x30
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x180bdc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x180bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180be0: 0x1440ff53  bnez        $v0, . + 4 + (-0xAD << 2)
    ctx->pc = 0x180BE0u;
    {
        const bool branch_taken_0x180be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BE0u;
        // 0x180be4: 0x25ef0010  addiu       $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180be0) {
            ctx->pc = 0x180930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180930;
        }
    }
    ctx->pc = 0x180BE8u;
    // 0x180be8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180bec:
    // 0x180bec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180bf0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x180bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x180BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BF4u;
        // 0x180bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180BFCu;
}
