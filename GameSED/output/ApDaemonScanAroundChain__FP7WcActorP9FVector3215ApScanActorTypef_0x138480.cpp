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

// Function: ApDaemonScanAroundChain__FP7WcActorP9FVector3215ApScanActorTypef
// Address: 0x138480 - 0x138694
void ApDaemonScanAroundChain__FP7WcActorP9FVector3215ApScanActorTypef_0x138480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanAroundChain__FP7WcActorP9FVector3215ApScanActorTypef_0x138480");
#endif

    switch (ctx->pc) {
        case 0x1384b8u: goto label_1384b8;
        case 0x1384f4u: goto label_1384f4;
        case 0x138530u: goto label_138530;
        case 0x1385b0u: goto label_1385b0;
        case 0x138640u: goto label_138640;
        default: break;
    }

    ctx->pc = 0x138480u;

    // 0x138480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138484: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138488: 0x2442a3e0  addiu       $v0, $v0, -0x5C20
    ctx->pc = 0x138488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
    // 0x13848c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138490: 0xaf808a20  sw          $zero, -0x75E0($gp)
    ctx->pc = 0x138490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 0));
    // 0x138494: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x138494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138498: 0xaf808a24  sw          $zero, -0x75DC($gp)
    ctx->pc = 0x138498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 0));
    // 0x13849c: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x13849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1384a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1384a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1384a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1384a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384a8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1384a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1384ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1384acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1384b0: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1384b4: 0x0  nop
    ctx->pc = 0x1384b4u;
    // NOP
label_1384b8:
    // 0x1384b8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1384bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1384bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1384c0: 0x0  nop
    ctx->pc = 0x1384c0u;
    // NOP
    // 0x1384c4: 0x0  nop
    ctx->pc = 0x1384c4u;
    // NOP
    // 0x1384c8: 0x0  nop
    ctx->pc = 0x1384c8u;
    // NOP
    // 0x1384cc: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1384CCu;
    {
        const bool branch_taken_0x1384cc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1384D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384CCu;
        // 0x1384d0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384cc) {
            ctx->pc = 0x1384B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1384b8;
        }
    }
    ctx->pc = 0x1384D4u;
    // 0x1384d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1384d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1384d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1384d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1384dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1384e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1384e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384e4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1384e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1384e8: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x1384e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x1384ec: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x1384ECu;
    SET_GPR_U32(ctx, 31, 0x1384F4u);
    ctx->pc = 0x1384F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384ECu;
    // 0x1384f0: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x1384ECu, 0x1384F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384F4u;
label_1384f4:
    // 0x1384f4: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1384F4u;
    {
        const bool branch_taken_0x1384f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1384F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384F4u;
        // 0x1384f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384f4) {
            ctx->pc = 0x138680u;
            goto label_138680;
        }
    }
    ctx->pc = 0x1384FCu;
    // 0x1384fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1384fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x138500: 0x246abc50  addiu       $t2, $v1, -0x43B0
    ctx->pc = 0x138500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x138504: 0x8d420400  lw          $v0, 0x400($t2)
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x138508: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x138508u;
    {
        const bool branch_taken_0x138508 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138508u;
        // 0x13850c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138508) {
            ctx->pc = 0x13861Cu;
            goto label_13861c;
        }
    }
    ctx->pc = 0x138510u;
    // 0x138510: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138514: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x138514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x138518: 0x244ba408  addiu       $t3, $v0, -0x5BF8
    ctx->pc = 0x138518u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943752));
    // 0x13851c: 0x246ea3e0  addiu       $t6, $v1, -0x5C20
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943712));
    // 0x138520: 0x240d0118  addiu       $t5, $zero, 0x118
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x138524: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x138524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138528: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x138528u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13852c: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x13852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_138530:
    // 0x138530: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x138534: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138534u;
    {
        const bool branch_taken_0x138534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x138534) {
            ctx->pc = 0x138538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138534u;
            // 0x138538: 0xc5200004  lwc1        $f0, 0x4($t1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x138558u;
            goto label_138558;
        }
    }
    ctx->pc = 0x13853Cu;
    // 0x13853c: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x13853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x138540: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x138540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138548: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x138548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x13854c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13854Cu;
    {
        const bool branch_taken_0x13854c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13854Cu;
        // 0x138550: 0xaf828a2c  sw          $v0, -0x75D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13854c) {
            ctx->pc = 0x1385F8u;
            goto label_1385f8;
        }
    }
    ctx->pc = 0x138554u;
    // 0x138554: 0x0  nop
    ctx->pc = 0x138554u;
    // NOP
label_138558:
    // 0x138558: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x138558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13855c: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x13855Cu;
    {
        const bool branch_taken_0x13855c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13855c) {
            ctx->pc = 0x138560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13855Cu;
            // 0x138560: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            goto label_138600;
        }
    }
    ctx->pc = 0x138564u;
    // 0x138564: 0x8d420400  lw          $v0, 0x400($t2)
    ctx->pc = 0x138564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1024)));
    // 0x138568: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x138568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13856c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x13856Cu;
    {
        const bool branch_taken_0x13856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13856c) {
            ctx->pc = 0x138570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13856Cu;
            // 0x138570: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            goto label_138600;
        }
    }
    ctx->pc = 0x138574u;
    // 0x138574: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138578: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x138578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13857c: 0x544d0020  bnel        $v0, $t5, . + 4 + (0x20 << 2)
    ctx->pc = 0x13857Cu;
    {
        const bool branch_taken_0x13857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x13857c) {
            ctx->pc = 0x138580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13857Cu;
            // 0x138580: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            goto label_138600;
        }
    }
    ctx->pc = 0x138584u;
    // 0x138584: 0x8f838a2c  lw          $v1, -0x75D4($gp)
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x138588: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x138588u;
    {
        const bool branch_taken_0x138588 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138588u;
        // 0x13858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138588) {
            ctx->pc = 0x1385D4u;
            goto label_1385d4;
        }
    }
    ctx->pc = 0x138590u;
    // 0x138590: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x138594: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x138594u;
    {
        const bool branch_taken_0x138594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x138598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138594u;
        // 0x138598: 0x8f828a2c  lw          $v0, -0x75D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138594) {
            ctx->pc = 0x1385D8u;
            goto label_1385d8;
        }
    }
    ctx->pc = 0x13859Cu;
    // 0x13859c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x13859cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1385a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1385a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1385a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1385ac: 0x0  nop
    ctx->pc = 0x1385acu;
    // NOP
label_1385b0:
    // 0x1385b0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1385b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1385b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1385B4u;
    {
        const bool branch_taken_0x1385b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385B4u;
        // 0x1385b8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385b4) {
            ctx->pc = 0x1385D4u;
            goto label_1385d4;
        }
    }
    ctx->pc = 0x1385BCu;
    // 0x1385bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1385c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1385c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1385c4: 0x0  nop
    ctx->pc = 0x1385c4u;
    // NOP
    // 0x1385c8: 0x0  nop
    ctx->pc = 0x1385c8u;
    // NOP
    // 0x1385cc: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1385CCu;
    {
        const bool branch_taken_0x1385cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1385cc) {
            ctx->pc = 0x1385D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385CCu;
            // 0x1385d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1385B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1385b0;
        }
    }
    ctx->pc = 0x1385D4u;
label_1385d4:
    // 0x1385d4: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
label_1385d8:
    // 0x1385d8: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1385D8u;
    {
        const bool branch_taken_0x1385d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1385d8) {
            ctx->pc = 0x1385DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385D8u;
            // 0x1385dc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            goto label_138600;
        }
    }
    ctx->pc = 0x1385E0u;
    // 0x1385e0: 0x8f828a24  lw          $v0, -0x75DC($gp)
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x1385e4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1385e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1385e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1385e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1385ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1385ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1385f0: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1385f4: 0xaf828a24  sw          $v0, -0x75DC($gp)
    ctx->pc = 0x1385f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 2));
label_1385f8:
    // 0x1385f8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1385f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1385fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_138600:
    // 0x138600: 0x2902000a  slti        $v0, $t0, 0xA
    ctx->pc = 0x138600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x138604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138604u;
        // 0x138608: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138604) {
            ctx->pc = 0x13861Cu;
            goto label_13861c;
        }
    }
    ctx->pc = 0x13860Cu;
    // 0x13860c: 0x8d420400  lw          $v0, 0x400($t2)
    ctx->pc = 0x13860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1024)));
    // 0x138610: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x138610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138614: 0x5440ffc6  bnel        $v0, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x138614u;
    {
        const bool branch_taken_0x138614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138614) {
            ctx->pc = 0x138618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138614u;
            // 0x138618: 0x8e020230  lw          $v0, 0x230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138530;
        }
    }
    ctx->pc = 0x13861Cu;
label_13861c:
    // 0x13861c: 0x8f848a2c  lw          $a0, -0x75D4($gp)
    ctx->pc = 0x13861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x138620: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138624: 0x8f868a24  lw          $a2, -0x75DC($gp)
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x138628: 0x2445a3e0  addiu       $a1, $v0, -0x5C20
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
    // 0x13862c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x138630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138634: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x138638: 0x2421a408  addiu       $at, $at, -0x5BF8
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294943752));
    // 0x13863c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_138640:
    // 0x138640: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x138640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x138644: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x138644u;
    {
        const bool branch_taken_0x138644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138644) {
            ctx->pc = 0x138648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138644u;
            // 0x138648: 0xaf848a2c  sw          $a0, -0x75D4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138678u;
            goto label_138678;
        }
    }
    ctx->pc = 0x13864Cu;
    // 0x13864c: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x13864cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x138650: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x138650u;
    {
        const bool branch_taken_0x138650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138650) {
            ctx->pc = 0x138654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138650u;
            // 0x138654: 0xaf848a2c  sw          $a0, -0x75D4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138678u;
            goto label_138678;
        }
    }
    ctx->pc = 0x138658u;
    // 0x138658: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x138658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13865c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x138660: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x138664: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x138668: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x138668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13866c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x13866Cu;
    {
        const bool branch_taken_0x13866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13866Cu;
        // 0x138670: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13866c) {
            ctx->pc = 0x138640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138640;
        }
    }
    ctx->pc = 0x138674u;
    // 0x138674: 0x0  nop
    ctx->pc = 0x138674u;
    // NOP
label_138678:
    // 0x138678: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x138678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13867c: 0xaf888a24  sw          $t0, -0x75DC($gp)
    ctx->pc = 0x13867cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 8));
label_138680:
    // 0x138680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138684: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x138684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138688: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x138688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13868c: 0x3e00008  jr          $ra
    ctx->pc = 0x13868Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13868Cu;
        // 0x138690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13868Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138694u;
}
