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

// Function: _waitIpuIdle64
// Address: 0x1c1bb8 - 0x1c1c68
void _waitIpuIdle64_0x1c1bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle64_0x1c1bb8");
#endif

    switch (ctx->pc) {
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c2cu: goto label_1c1c2c;
        default: break;
    }

    ctx->pc = 0x1c1bb8u;

    // 0x1c1bb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1bbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1bc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1bc4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c1bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c1bc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1bcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1bdc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1c1bdcu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x1c1be0: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1BE0u;
    {
        const bool branch_taken_0x1c1be0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BE0u;
        // 0x1c1be4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1be0) {
            ctx->pc = 0x1C1C50u;
            goto label_1c1c50;
        }
    }
    ctx->pc = 0x1C1BE8u;
    // 0x1c1be8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1bec: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1bf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1bf4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1c1bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1c1bf8: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C1BF8u;
    {
        const bool branch_taken_0x1c1bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BF8u;
        // 0x1c1bfc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bf8) {
            ctx->pc = 0x1C1C54u;
            goto label_1c1c54;
        }
    }
    ctx->pc = 0x1C1C00u;
    // 0x1c1c00: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1c04: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1c08: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x1c1c08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
    // 0x1c1c0c: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x1c1c0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x1c1c10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c1c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c14: 0x0  nop
    ctx->pc = 0x1c1c14u;
    // NOP
label_1c1c18:
    // 0x1c1c18: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1C1Cu;
    {
        const bool branch_taken_0x1c1c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C1Cu;
        // 0x1c1c20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c1c) {
            ctx->pc = 0x1C1C30u;
            goto label_1c1c30;
        }
    }
    ctx->pc = 0x1C1C24u;
    // 0x1c1c24: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1C24u;
    SET_GPR_U32(ctx, 31, 0x1C1C2Cu);
    ctx->pc = 0x1C1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C24u;
    // 0x1c1c28: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1C24u, 0x1C1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C2Cu;
label_1c1c2c:
    // 0x1c1c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c30:
    // 0x1c1c30: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1c1c30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1c34: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1C34u;
    {
        const bool branch_taken_0x1c1c34 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C34u;
        // 0x1c1c38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c34) {
            ctx->pc = 0x1C1C50u;
            goto label_1c1c50;
        }
    }
    ctx->pc = 0x1C1C3Cu;
    // 0x1c1c3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1c40: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c1c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c1c44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C1C44u;
    {
        const bool branch_taken_0x1c1c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C44u;
        // 0x1c1c48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c44) {
            ctx->pc = 0x1C1C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1c18;
        }
    }
    ctx->pc = 0x1C1C4Cu;
    // 0x1c1c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1c50:
    // 0x1c1c50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c1c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c54:
    // 0x1c1c54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1c58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C60u;
        // 0x1c1c64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1C68u;
}
