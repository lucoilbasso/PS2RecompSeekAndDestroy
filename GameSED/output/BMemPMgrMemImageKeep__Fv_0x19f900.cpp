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

// Function: BMemPMgrMemImageKeep__Fv
// Address: 0x19f900 - 0x19f9d0
void BMemPMgrMemImageKeep__Fv_0x19f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrMemImageKeep__Fv_0x19f900");
#endif

    switch (ctx->pc) {
        case 0x19f928u: goto label_19f928;
        case 0x19f958u: goto label_19f958;
        case 0x19f9b8u: goto label_19f9b8;
        case 0x19f9c0u: goto label_19f9c0;
        default: break;
    }

    ctx->pc = 0x19f900u;

    // 0x19f900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f904: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x19f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x19f908: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x19f908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x19f90c: 0x3c0a0fff  lui         $t2, 0xFFF
    ctx->pc = 0x19f90cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4095 << 16));
    // 0x19f910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f914: 0x2444e130  addiu       $a0, $v0, -0x1ED0
    ctx->pc = 0x19f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x19f918: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19f91c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x19f91cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x19f920: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x19f920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19f924: 0x0  nop
    ctx->pc = 0x19f924u;
    // NOP
label_19f928:
    // 0x19f928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f92c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19F92Cu;
    {
        const bool branch_taken_0x19f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F92Cu;
        // 0x19f930: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f92c) {
            ctx->pc = 0x19F98Cu;
            goto label_19f98c;
        }
    }
    ctx->pc = 0x19F934u;
    // 0x19f934: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19f934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f938: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f93c: 0x8a1024  and         $v0, $a0, $t2
    ctx->pc = 0x19f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x19f940: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x19F940u;
    {
        const bool branch_taken_0x19f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f940) {
            ctx->pc = 0x19F944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F940u;
            // 0x19f944: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F98Cu;
            goto label_19f98c;
        }
    }
    ctx->pc = 0x19F948u;
    // 0x19f948: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x19f948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x19f94c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x19f94cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x19f950: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19f950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19f954: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x19f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_19f958:
    // 0x19f958: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F958u;
    {
        const bool branch_taken_0x19f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f958) {
            ctx->pc = 0x19F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F958u;
            // 0x19f95c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F970u;
            goto label_19f970;
        }
    }
    ctx->pc = 0x19F960u;
    // 0x19f960: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x19f960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x19f964: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19f964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19f968: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19f968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19f96c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19f970:
    // 0x19f970: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x19f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x19f974: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19f974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19f978: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f97c: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x19f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x19f980: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19F980u;
    {
        const bool branch_taken_0x19f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F980u;
        // 0x19f984: 0x881024  and         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f980) {
            ctx->pc = 0x19F958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F988u;
    // 0x19f988: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x19f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f98c:
    // 0x19f98c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x19f990: 0x521ffe5  bgez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x19F990u;
    {
        const bool branch_taken_0x19f990 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x19F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F990u;
        // 0x19f994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f990) {
            ctx->pc = 0x19F928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f928;
        }
    }
    ctx->pc = 0x19F998u;
    // 0x19f998: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x19f99c: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x19f9a0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x19f9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f9a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F9A4u;
    {
        const bool branch_taken_0x19f9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A4u;
        // 0x19f9a8: 0xaf84915c  sw          $a0, -0x6EA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9a4) {
            ctx->pc = 0x19F9B8u;
            goto label_19f9b8;
        }
    }
    ctx->pc = 0x19F9ACu;
    // 0x19f9ac: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19f9b0: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x19F9B0u;
    SET_GPR_U32(ctx, 31, 0x19F9B8u);
    ctx->pc = 0x19F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9B0u;
    // 0x19f9b4: 0x24848790  addiu       $a0, $a0, -0x7870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x19F9B0u, 0x19F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9B8u;
label_19f9b8:
    // 0x19f9b8: 0xc0683b2  jal         func_1A0EC8
    ctx->pc = 0x19F9B8u;
    SET_GPR_U32(ctx, 31, 0x19F9C0u);
    ctx->pc = 0x1A0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EC8u, 0x19F9B8u, 0x19F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9C0u;
label_19f9c0:
    // 0x19f9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f9c4: 0xaf829160  sw          $v0, -0x6EA0($gp)
    ctx->pc = 0x19f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 2));
    // 0x19f9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9C8u;
        // 0x19f9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F9D0u;
}
