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

// Function: WHitpolyBarrierHitScanProc__FP9WcHitpolyP19_BarrierHitScanWorkii
// Address: 0x1813d0 - 0x18153c
void WHitpolyBarrierHitScanProc__FP9WcHitpolyP19_BarrierHitScanWorkii_0x1813d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyBarrierHitScanProc__FP9WcHitpolyP19_BarrierHitScanWorkii_0x1813d0");
#endif

    switch (ctx->pc) {
        case 0x181484u: goto label_181484;
        case 0x1814d8u: goto label_1814d8;
        default: break;
    }

    ctx->pc = 0x1813d0u;

    // 0x1813d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1813d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1813d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1813d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1813d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1813d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813dc: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x1813dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1813e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1813e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1813e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1813e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1813e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1813e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1813ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1813f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1813f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813f4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1813F4u;
    {
        const bool branch_taken_0x1813f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813F4u;
        // 0x1813f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813f4) {
            ctx->pc = 0x181520u;
            goto label_181520;
        }
    }
    ctx->pc = 0x1813FCu;
    // 0x1813fc: 0x6200048  bltz        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1813FCu;
    {
        const bool branch_taken_0x1813fc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x181400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813FCu;
        // 0x181400: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813fc) {
            ctx->pc = 0x181520u;
            goto label_181520;
        }
    }
    ctx->pc = 0x181404u;
    // 0x181404: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x181404u;
    {
        const bool branch_taken_0x181404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181404u;
        // 0x181408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181404) {
            ctx->pc = 0x181524u;
            goto label_181524;
        }
    }
    ctx->pc = 0x18140Cu;
    // 0x18140c: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x181410: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x181410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x181414: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x181418: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18141c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181420: 0x94630038  lhu         $v1, 0x38($v1)
    ctx->pc = 0x181420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x181424: 0x1064003f  beq         $v1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x181424u;
    {
        const bool branch_taken_0x181424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x181428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181424u;
        // 0x181428: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181424) {
            ctx->pc = 0x181524u;
            goto label_181524;
        }
    }
    ctx->pc = 0x18142Cu;
    // 0x18142c: 0x8ce60024  lw          $a2, 0x24($a3)
    ctx->pc = 0x18142cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x181430: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x181434: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x181434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181438: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x18143c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181440: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x181440u;
    {
        const bool branch_taken_0x181440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181440) {
            ctx->pc = 0x181444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181440u;
            // 0x181444: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181528u;
            goto label_181528;
        }
    }
    ctx->pc = 0x181448u;
    // 0x181448: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18144c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18144Cu;
    {
        const bool branch_taken_0x18144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18144Cu;
        // 0x181450: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18144c) {
            ctx->pc = 0x1814B0u;
            goto label_1814b0;
        }
    }
    ctx->pc = 0x181454u;
    // 0x181454: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x181458: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x181458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18145c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x18145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181460: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x181464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181464u;
    {
        const bool branch_taken_0x181464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181464u;
        // 0x181468: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181464) {
            ctx->pc = 0x18147Cu;
            goto label_18147c;
        }
    }
    ctx->pc = 0x18146Cu;
    // 0x18146c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x181470: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x181470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x181474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181478: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x181478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_18147c:
    // 0x18147c: 0xc060300  jal         func_180C00
    ctx->pc = 0x18147Cu;
    SET_GPR_U32(ctx, 31, 0x181484u);
    ctx->pc = 0x181480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18147Cu;
    // 0x181480: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x18147Cu, 0x181484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181484u;
label_181484:
    // 0x181484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x181484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181488: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181488u;
    {
        const bool branch_taken_0x181488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181488u;
        // 0x18148c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181488) {
            ctx->pc = 0x1814A4u;
            goto label_1814a4;
        }
    }
    ctx->pc = 0x181490u;
    // 0x181490: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x181494: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18149c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18149cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1814a0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x1814a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_1814a4:
    // 0x1814a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1814A4u;
    {
        const bool branch_taken_0x1814a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814A4u;
        // 0x1814a8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814a4) {
            ctx->pc = 0x181500u;
            goto label_181500;
        }
    }
    ctx->pc = 0x1814ACu;
    // 0x1814ac: 0x0  nop
    ctx->pc = 0x1814acu;
    // NOP
label_1814b0:
    // 0x1814b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1814b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814b4: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1814b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1814b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1814B8u;
    {
        const bool branch_taken_0x1814b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814B8u;
        // 0x1814bc: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814b8) {
            ctx->pc = 0x1814CCu;
            goto label_1814cc;
        }
    }
    ctx->pc = 0x1814C0u;
    // 0x1814c0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1814c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1814c4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1814c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1814c8: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1814cc:
    // 0x1814cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1814ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814d0: 0xc060216  jal         func_180858
    ctx->pc = 0x1814D0u;
    SET_GPR_U32(ctx, 31, 0x1814D8u);
    ctx->pc = 0x1814D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814D0u;
    // 0x1814d4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180858u, 0x1814D0u, 0x1814D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814D8u;
label_1814d8:
    // 0x1814d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1814d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1814DCu;
    {
        const bool branch_taken_0x1814dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814DCu;
        // 0x1814e0: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814dc) {
            ctx->pc = 0x1814FCu;
            goto label_1814fc;
        }
    }
    ctx->pc = 0x1814E4u;
    // 0x1814e4: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x1814e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1814ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1814f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1814f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1814f4: 0x8ca3dc08  lw          $v1, -0x23F8($a1)
    ctx->pc = 0x1814f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x26DC08u));
    // 0x1814f8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1814f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_1814fc:
    // 0x1814fc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1814fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181500:
    // 0x181500: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181500u;
    {
        const bool branch_taken_0x181500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181500u;
        // 0x181504: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181500) {
            ctx->pc = 0x181520u;
            goto label_181520;
        }
    }
    ctx->pc = 0x181508u;
    // 0x181508: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x181508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x18150c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x18150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x181510: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x181510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x181514: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x181514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x181518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181518u;
    {
        const bool branch_taken_0x181518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181518u;
        // 0x18151c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181518) {
            ctx->pc = 0x181524u;
            goto label_181524;
        }
    }
    ctx->pc = 0x181520u;
label_181520:
    // 0x181520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181524:
    // 0x181524: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x181524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_181528:
    // 0x181528: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x181528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18152c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18152cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181530: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x181530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x181534: 0x3e00008  jr          $ra
    ctx->pc = 0x181534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181534u;
        // 0x181538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18153Cu;
}
