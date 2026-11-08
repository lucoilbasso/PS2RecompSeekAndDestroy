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

// Function: WHitpolyGroundHitScan__FP9WcHitpolyP18_GroundHitScanWork
// Address: 0x1806f8 - 0x180858
void WHitpolyGroundHitScan__FP9WcHitpolyP18_GroundHitScanWork_0x1806f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyGroundHitScan__FP9WcHitpolyP18_GroundHitScanWork_0x1806f8");
#endif

    switch (ctx->pc) {
        case 0x1807c4u: goto label_1807c4;
        case 0x1807e0u: goto label_1807e0;
        case 0x180800u: goto label_180800;
        case 0x18081cu: goto label_18081c;
        default: break;
    }

    ctx->pc = 0x1806f8u;

    // 0x1806f8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1806fc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1806fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180700: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x180704: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x180704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x180708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18070c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x18070cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x180714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x180718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x180718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18071c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18071cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x180720: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x180720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180724: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x180724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x180728: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x180728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18072c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180730: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x180730u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x26DBE0u, _value); } while (0);
    // 0x180734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x180734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180738: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x180738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0);
    // 0x18073c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x18073cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180740: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x180744: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x180744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180748: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x180748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18074c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180750: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x180750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180754: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x180754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x180758: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x180758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x18075c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18075cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x180760: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x180760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x180764: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x180768: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x18076c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18076cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x180770: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x180770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x180774: 0x24e9ffff  addiu       $t1, $a3, -0x1
    ctx->pc = 0x180774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x180778: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x180778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18077c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18077cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x180780: 0x8e6b002c  lw          $t3, 0x2C($s3)
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x180784: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x180784u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x180788: 0x693024  and         $a2, $v1, $t1
    ctx->pc = 0x180788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x18078c: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x18078cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x180790: 0x481007  srav        $v0, $t0, $v0
    ctx->pc = 0x180790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x180794: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x180794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x180798: 0x4b8821  addu        $s1, $v0, $t3
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x18079c: 0x6b8021  addu        $s0, $v1, $t3
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1807a0: 0xc7302b  sltu        $a2, $a2, $a3
    ctx->pc = 0x1807a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1807a4: 0x107402b  sltu        $t0, $t0, $a3
    ctx->pc = 0x1807a4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1807a8: 0x186500a  movz        $t2, $t4, $a2
    ctx->pc = 0x1807a8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 12));
    // 0x1807ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1807acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1807b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807b4: 0x188a00a  movz        $s4, $t4, $t0
    ctx->pc = 0x1807b4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 12));
    // 0x1807b8: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1807bc: 0xc060184  jal         func_180610
    ctx->pc = 0x1807BCu;
    SET_GPR_U32(ctx, 31, 0x1807C4u);
    ctx->pc = 0x1807C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807BCu;
    // 0x1807c0: 0x140a82d  daddu       $s5, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180610u, 0x1807BCu, 0x1807C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1807C4u;
label_1807c4:
    // 0x1807c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1807c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1807ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807d0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1807D0u;
    {
        const bool branch_taken_0x1807d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1807D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807D0u;
        // 0x1807d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807d0) {
            ctx->pc = 0x180824u;
            goto label_180824;
        }
    }
    ctx->pc = 0x1807D8u;
    // 0x1807d8: 0xc060184  jal         func_180610
    ctx->pc = 0x1807D8u;
    SET_GPR_U32(ctx, 31, 0x1807E0u);
    ctx->pc = 0x180610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180610u, 0x1807D8u, 0x1807E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1807E0u;
label_1807e0:
    // 0x1807e0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1807E0u;
    {
        const bool branch_taken_0x1807e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1807E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807E0u;
        // 0x1807e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807e0) {
            ctx->pc = 0x180834u;
            goto label_180834;
        }
    }
    ctx->pc = 0x1807E8u;
    // 0x1807e8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1807ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1807ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1807f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1807f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1807f8: 0xc060184  jal         func_180610
    ctx->pc = 0x1807F8u;
    SET_GPR_U32(ctx, 31, 0x180800u);
    ctx->pc = 0x1807FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807F8u;
    // 0x1807fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180610u, 0x1807F8u, 0x180800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180800u;
label_180800:
    // 0x180800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180804: 0x2153023  subu        $a2, $s0, $s5
    ctx->pc = 0x180804u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x180808: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x180808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18080c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18080Cu;
    {
        const bool branch_taken_0x18080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18080Cu;
        // 0x180810: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18080c) {
            ctx->pc = 0x180824u;
            goto label_180824;
        }
    }
    ctx->pc = 0x180814u;
    // 0x180814: 0xc060184  jal         func_180610
    ctx->pc = 0x180814u;
    SET_GPR_U32(ctx, 31, 0x18081Cu);
    ctx->pc = 0x180610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180610u, 0x180814u, 0x18081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18081Cu;
label_18081c:
    // 0x18081c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18081Cu;
    {
        const bool branch_taken_0x18081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18081c) {
            ctx->pc = 0x180820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18081Cu;
            // 0x180820: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180830u;
            goto label_180830;
        }
    }
    ctx->pc = 0x180824u;
label_180824:
    // 0x180824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180824u;
    {
        const bool branch_taken_0x180824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180824u;
        // 0x180828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180824) {
            ctx->pc = 0x180834u;
            goto label_180834;
        }
    }
    ctx->pc = 0x18082Cu;
    // 0x18082c: 0x0  nop
    ctx->pc = 0x18082cu;
    // NOP
label_180830:
    // 0x180830: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x180830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180834:
    // 0x180834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18083c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18083cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180840: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x180840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180844: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x180844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180848: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x180848u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18084c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180850: 0x3e00008  jr          $ra
    ctx->pc = 0x180850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180850u;
        // 0x180854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180858u;
}
