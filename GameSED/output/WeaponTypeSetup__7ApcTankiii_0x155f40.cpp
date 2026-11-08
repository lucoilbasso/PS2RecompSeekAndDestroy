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

// Function: WeaponTypeSetup__7ApcTankiii
// Address: 0x155f40 - 0x156014
void WeaponTypeSetup__7ApcTankiii_0x155f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponTypeSetup__7ApcTankiii_0x155f40");
#endif

    switch (ctx->pc) {
        case 0x155fd0u: goto label_155fd0;
        case 0x156000u: goto label_156000;
        default: break;
    }

    ctx->pc = 0x155f40u;

    // 0x155f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155f4c: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x155F4Cu;
    {
        const bool branch_taken_0x155f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F4Cu;
        // 0x155f50: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f4c) {
            ctx->pc = 0x155F98u;
            goto label_155f98;
        }
    }
    ctx->pc = 0x155F54u;
    // 0x155f54: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x155f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x155f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155F58u;
    {
        const bool branch_taken_0x155f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F58u;
        // 0x155f5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f58) {
            ctx->pc = 0x155F78u;
            goto label_155f78;
        }
    }
    ctx->pc = 0x155F60u;
    // 0x155f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155f64: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155F64u;
    {
        const bool branch_taken_0x155f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F64u;
        // 0x155f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f64) {
            ctx->pc = 0x155F90u;
            goto label_155f90;
        }
    }
    ctx->pc = 0x155F6Cu;
    // 0x155f6c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x155F6Cu;
    {
        const bool branch_taken_0x155f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F6Cu;
        // 0x155f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f6c) {
            ctx->pc = 0x156008u;
            goto label_156008;
        }
    }
    ctx->pc = 0x155F74u;
    // 0x155f74: 0x0  nop
    ctx->pc = 0x155f74u;
    // NOP
label_155f78:
    // 0x155f78: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F78u;
    {
        const bool branch_taken_0x155f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F78u;
        // 0x155f7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f78) {
            ctx->pc = 0x155FA0u;
            goto label_155fa0;
        }
    }
    ctx->pc = 0x155F80u;
    // 0x155f80: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F80u;
    {
        const bool branch_taken_0x155f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F80u;
        // 0x155f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f80) {
            ctx->pc = 0x155FA8u;
            goto label_155fa8;
        }
    }
    ctx->pc = 0x155F88u;
    // 0x155f88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x155F88u;
    {
        const bool branch_taken_0x155f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F88u;
        // 0x155f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f88) {
            ctx->pc = 0x156008u;
            goto label_156008;
        }
    }
    ctx->pc = 0x155F90u;
label_155f90:
    // 0x155f90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155F90u;
    {
        const bool branch_taken_0x155f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F90u;
        // 0x155f94: 0x249006dc  addiu       $s0, $a0, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f90) {
            ctx->pc = 0x155FACu;
            goto label_155fac;
        }
    }
    ctx->pc = 0x155F98u;
label_155f98:
    // 0x155f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155F98u;
    {
        const bool branch_taken_0x155f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F98u;
        // 0x155f9c: 0x2490071c  addiu       $s0, $a0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f98) {
            ctx->pc = 0x155FACu;
            goto label_155fac;
        }
    }
    ctx->pc = 0x155FA0u;
label_155fa0:
    // 0x155fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155FA0u;
    {
        const bool branch_taken_0x155fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FA0u;
        // 0x155fa4: 0x2490075c  addiu       $s0, $a0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fa0) {
            ctx->pc = 0x155FACu;
            goto label_155fac;
        }
    }
    ctx->pc = 0x155FA8u;
label_155fa8:
    // 0x155fa8: 0x2490079c  addiu       $s0, $a0, 0x79C
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1948));
label_155fac:
    // 0x155fac: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x155facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x155fb0: 0x24459d20  addiu       $a1, $v0, -0x62E0
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941984));
    // 0x155fb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x209D20u));
    // 0x155fb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x155FB8u;
    {
        const bool branch_taken_0x155fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FB8u;
        // 0x155fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fb8) {
            ctx->pc = 0x155FF8u;
            goto label_155ff8;
        }
    }
    ctx->pc = 0x155FC0u;
    // 0x155fc0: 0x1047000d  beq         $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x155FC0u;
    {
        const bool branch_taken_0x155fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x155fc0) {
            ctx->pc = 0x155FF8u;
            goto label_155ff8;
        }
    }
    ctx->pc = 0x155FC8u;
    // 0x155fc8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x155fcc: 0x0  nop
    ctx->pc = 0x155fccu;
    // NOP
label_155fd0:
    // 0x155fd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x155fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155fd4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x155FD4u;
    {
        const bool branch_taken_0x155fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155fd4) {
            ctx->pc = 0x155FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155FD4u;
            // 0x155fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FF8u;
            goto label_155ff8;
        }
    }
    ctx->pc = 0x155FDCu;
    // 0x155fdc: 0x0  nop
    ctx->pc = 0x155fdcu;
    // NOP
    // 0x155fe0: 0x0  nop
    ctx->pc = 0x155fe0u;
    // NOP
    // 0x155fe4: 0x0  nop
    ctx->pc = 0x155fe4u;
    // NOP
    // 0x155fe8: 0x0  nop
    ctx->pc = 0x155fe8u;
    // NOP
    // 0x155fec: 0x5467fff8  bnel        $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x155FECu;
    {
        const bool branch_taken_0x155fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x155fec) {
            ctx->pc = 0x155FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155FECu;
            // 0x155ff0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155fd0;
        }
    }
    ctx->pc = 0x155FF4u;
    // 0x155ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155ff8:
    // 0x155ff8: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x155FF8u;
    SET_GPR_U32(ctx, 31, 0x156000u);
    ctx->pc = 0x155FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FF8u;
    // 0x155ffc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x155FF8u, 0x156000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156000u;
label_156000:
    // 0x156000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156008:
    // 0x156008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15600c: 0x3e00008  jr          $ra
    ctx->pc = 0x15600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15600Cu;
        // 0x156010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156014u;
}
