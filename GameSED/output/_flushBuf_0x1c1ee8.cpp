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

// Function: _flushBuf
// Address: 0x1c1ee8 - 0x1c1fd8
void _flushBuf_0x1c1ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_flushBuf_0x1c1ee8");
#endif

    switch (ctx->pc) {
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1facu: goto label_1c1fac;
        default: break;
    }

    ctx->pc = 0x1c1ee8u;

    // 0x1c1ee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1eec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1ef0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1ef4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1efc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1c1efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1f00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1f04: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x1c1f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1c1f08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1f1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1f20: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1c1f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1c1f24: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C1F24u;
    {
        const bool branch_taken_0x1c1f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F24u;
        // 0x1c1f28: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f24) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F2Cu;
    // 0x1c1f2c: 0x0  nop
    ctx->pc = 0x1c1f2cu;
    // NOP
label_1c1f30:
    // 0x1c1f30: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c1f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f34: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1f38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1F38u;
    {
        const bool branch_taken_0x1c1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F38u;
        // 0x1c1f3c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f38) {
            ctx->pc = 0x1C1F4Cu;
            goto label_1c1f4c;
        }
    }
    ctx->pc = 0x1C1F40u;
    // 0x1c1f40: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1F40u;
    SET_GPR_U32(ctx, 31, 0x1C1F48u);
    ctx->pc = 0x1C1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F40u;
    // 0x1c1f44: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1F40u, 0x1C1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F48u;
label_1c1f48:
    // 0x1c1f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f4c:
    // 0x1c1f4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1f50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1f54: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c1f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c1f58: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1f60: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1f64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c1f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c1f68: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C1F68u;
    {
        const bool branch_taken_0x1c1f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F68u;
        // 0x1c1f6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f68) {
            ctx->pc = 0x1C1F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1f30;
        }
    }
    ctx->pc = 0x1C1F70u;
    // 0x1c1f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1F70u;
    {
        const bool branch_taken_0x1c1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F70u;
        // 0x1c1f74: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f70) {
            ctx->pc = 0x1C1F80u;
            goto label_1c1f80;
        }
    }
    ctx->pc = 0x1C1F78u;
label_1c1f78:
    // 0x1c1f78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1f7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1c1f80:
    // 0x1c1f80: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1c1f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1c1f84: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1c1f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1c1f88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c1f8c: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1c1f90: 0x2642dcc0  addiu       $v0, $s2, -0x2340
    ctx->pc = 0x1c1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958272));
    // 0x1c1f94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c1f98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c1f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1fa4: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C1FA4u;
    SET_GPR_U32(ctx, 31, 0x1C1FACu);
    ctx->pc = 0x1C1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FA4u;
    // 0x1c1fa8: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C1FA4u, 0x1C1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FACu;
label_1c1fac:
    // 0x1c1fac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c1facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1fb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c1fb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c1fb4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1fb8: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x1c1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x1c1fbc: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x1c1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x1c1fc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1fc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1fc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD0u;
        // 0x1c1fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FD8u;
}
