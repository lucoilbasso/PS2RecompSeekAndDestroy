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

// Function: ApCameraZeroRate__FP7WcActor
// Address: 0x13fce0 - 0x13fe1c
void ApCameraZeroRate__FP7WcActor_0x13fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraZeroRate__FP7WcActor_0x13fce0");
#endif

    switch (ctx->pc) {
        case 0x13fd04u: goto label_13fd04;
        case 0x13fd48u: goto label_13fd48;
        case 0x13fd90u: goto label_13fd90;
        case 0x13fdd8u: goto label_13fdd8;
        default: break;
    }

    ctx->pc = 0x13fce0u;

    // 0x13fce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13fce4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13fcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13fcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13fcf4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fcf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fcf8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fcfc: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FCFCu;
    SET_GPR_U32(ctx, 31, 0x13FD04u);
    ctx->pc = 0x13FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCFCu;
    // 0x13fd00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FCFCu, 0x13FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD04u;
label_13fd04:
    // 0x13fd04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FD08u;
    {
        const bool branch_taken_0x13fd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD08u;
        // 0x13fd0c: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd08) {
            ctx->pc = 0x13FD28u;
            goto label_13fd28;
        }
    }
    ctx->pc = 0x13FD10u;
    // 0x13fd10: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fd14: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fd18: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FD18u;
    {
        const bool branch_taken_0x13fd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fd18) {
            ctx->pc = 0x13FD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD18u;
            // 0x13fd1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD2Cu;
            goto label_13fd2c;
        }
    }
    ctx->pc = 0x13FD20u;
    // 0x13fd20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13FD20u;
    {
        const bool branch_taken_0x13fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD20u;
        // 0x13fd24: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd20) {
            ctx->pc = 0x13FD2Cu;
            goto label_13fd2c;
        }
    }
    ctx->pc = 0x13FD28u;
label_13fd28:
    // 0x13fd28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fd2c:
    // 0x13fd2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FD2Cu;
    {
        const bool branch_taken_0x13fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd2c) {
            ctx->pc = 0x13FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD2Cu;
            // 0x13fd30: 0xac400144  sw          $zero, 0x144($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD34u;
            goto label_13fd34;
        }
    }
    ctx->pc = 0x13FD34u;
label_13fd34:
    // 0x13fd34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fd38: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fd3c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fd40: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FD40u;
    SET_GPR_U32(ctx, 31, 0x13FD48u);
    ctx->pc = 0x13FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD40u;
    // 0x13fd44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FD40u, 0x13FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD48u;
label_13fd48:
    // 0x13fd48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd4c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FD4Cu;
    {
        const bool branch_taken_0x13fd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD4Cu;
        // 0x13fd50: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd4c) {
            ctx->pc = 0x13FD70u;
            goto label_13fd70;
        }
    }
    ctx->pc = 0x13FD54u;
    // 0x13fd54: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fd58: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fd5c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FD5Cu;
    {
        const bool branch_taken_0x13fd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fd5c) {
            ctx->pc = 0x13FD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD5Cu;
            // 0x13fd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD74u;
            goto label_13fd74;
        }
    }
    ctx->pc = 0x13FD64u;
    // 0x13fd64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FD64u;
    {
        const bool branch_taken_0x13fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD64u;
        // 0x13fd68: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd64) {
            ctx->pc = 0x13FD74u;
            goto label_13fd74;
        }
    }
    ctx->pc = 0x13FD6Cu;
    // 0x13fd6c: 0x0  nop
    ctx->pc = 0x13fd6cu;
    // NOP
label_13fd70:
    // 0x13fd70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fd74:
    // 0x13fd74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FD74u;
    {
        const bool branch_taken_0x13fd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd74) {
            ctx->pc = 0x13FD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD74u;
            // 0x13fd78: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD7Cu;
            goto label_13fd7c;
        }
    }
    ctx->pc = 0x13FD7Cu;
label_13fd7c:
    // 0x13fd7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fd80: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fd84: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fd88: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FD88u;
    SET_GPR_U32(ctx, 31, 0x13FD90u);
    ctx->pc = 0x13FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD88u;
    // 0x13fd8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FD88u, 0x13FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD90u;
label_13fd90:
    // 0x13fd90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd94: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FD94u;
    {
        const bool branch_taken_0x13fd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD94u;
        // 0x13fd98: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd94) {
            ctx->pc = 0x13FDB8u;
            goto label_13fdb8;
        }
    }
    ctx->pc = 0x13FD9Cu;
    // 0x13fd9c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fda0: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fda4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FDA4u;
    {
        const bool branch_taken_0x13fda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fda4) {
            ctx->pc = 0x13FDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FDA4u;
            // 0x13fda8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FDBCu;
            goto label_13fdbc;
        }
    }
    ctx->pc = 0x13FDACu;
    // 0x13fdac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FDACu;
    {
        const bool branch_taken_0x13fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDACu;
        // 0x13fdb0: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdac) {
            ctx->pc = 0x13FDBCu;
            goto label_13fdbc;
        }
    }
    ctx->pc = 0x13FDB4u;
    // 0x13fdb4: 0x0  nop
    ctx->pc = 0x13fdb4u;
    // NOP
label_13fdb8:
    // 0x13fdb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fdb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fdbc:
    // 0x13fdbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FDBCu;
    {
        const bool branch_taken_0x13fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fdbc) {
            ctx->pc = 0x13FDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FDBCu;
            // 0x13fdc0: 0xac40014c  sw          $zero, 0x14C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FDC4u;
            goto label_13fdc4;
        }
    }
    ctx->pc = 0x13FDC4u;
label_13fdc4:
    // 0x13fdc4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fdc8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fdcc: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fdd0: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FDD0u;
    SET_GPR_U32(ctx, 31, 0x13FDD8u);
    ctx->pc = 0x13FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDD0u;
    // 0x13fdd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FDD0u, 0x13FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDD8u;
label_13fdd8:
    // 0x13fdd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fddc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FDDCu;
    {
        const bool branch_taken_0x13fddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDDCu;
        // 0x13fde0: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fddc) {
            ctx->pc = 0x13FE00u;
            goto label_13fe00;
        }
    }
    ctx->pc = 0x13FDE4u;
    // 0x13fde4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fde8: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fdec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FDECu;
    {
        const bool branch_taken_0x13fdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fdec) {
            ctx->pc = 0x13FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FDECu;
            // 0x13fdf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FE04u;
            goto label_13fe04;
        }
    }
    ctx->pc = 0x13FDF4u;
    // 0x13fdf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FDF4u;
    {
        const bool branch_taken_0x13fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDF4u;
        // 0x13fdf8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdf4) {
            ctx->pc = 0x13FE04u;
            goto label_13fe04;
        }
    }
    ctx->pc = 0x13FDFCu;
    // 0x13fdfc: 0x0  nop
    ctx->pc = 0x13fdfcu;
    // NOP
label_13fe00:
    // 0x13fe00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fe00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fe04:
    // 0x13fe04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FE04u;
    {
        const bool branch_taken_0x13fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fe04) {
            ctx->pc = 0x13FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FE04u;
            // 0x13fe08: 0xac400148  sw          $zero, 0x148($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FE0Cu;
            goto label_13fe0c;
        }
    }
    ctx->pc = 0x13FE0Cu;
label_13fe0c:
    // 0x13fe0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13fe0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fe10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13fe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13fe14: 0x3e00008  jr          $ra
    ctx->pc = 0x13FE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE14u;
        // 0x13fe18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FE1Cu;
}
