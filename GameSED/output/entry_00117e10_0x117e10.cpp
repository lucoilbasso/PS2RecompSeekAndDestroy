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

// Function: entry_00117e10
// Address: 0x117e10 - 0x117e7c
void entry_00117e10_0x117e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e10_0x117e10");
#endif

    switch (ctx->pc) {
        case 0x117e64u: goto label_117e64;
        case 0x117e70u: goto label_117e70;
        default: break;
    }

    ctx->pc = 0x117e10u;

label_117e10:
    // 0x117e10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x117e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x117e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x117e18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x117e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x117e1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x117e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x117e20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117e24: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x117e24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117e28: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x117e28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x117e2c: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117E2Cu;
    {
        const bool branch_taken_0x117e2c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x117E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E2Cu;
        // 0x117e30: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e2c) {
            ctx->pc = 0x117E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117e10;
        }
    }
    ctx->pc = 0x117E34u;
    // 0x117e34: 0x1037c2  srl         $a2, $s0, 31
    ctx->pc = 0x117e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x117e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e3c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x117e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x117e40: 0xa7a00008  sh          $zero, 0x8($sp)
    ctx->pc = 0x117e40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x117e44: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x117e44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x117e48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x117e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x117e4c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x117e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x117e50: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x117e54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117e58: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117e5c: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x117E5Cu;
    SET_GPR_U32(ctx, 31, 0x117E64u);
    ctx->pc = 0x117E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E5Cu;
    // 0x117e60: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x117E5Cu, 0x117E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E64u;
label_117e64:
    // 0x117e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e68: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x117E68u;
    SET_GPR_U32(ctx, 31, 0x117E70u);
    ctx->pc = 0x117E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E68u;
    // 0x117e6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x117E68u, 0x117E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x117e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x117e74: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x117E74u;
    {
        const bool branch_taken_0x117e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E74u;
        // 0x117e78: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e74) {
            ctx->pc = 0x117E08u;
            return;
        }
    }
    ctx->pc = 0x117E7Cu;
}
