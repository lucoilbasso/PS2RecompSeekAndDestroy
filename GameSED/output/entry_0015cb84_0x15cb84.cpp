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

// Function: entry_0015cb84
// Address: 0x15cb84 - 0x15cbc4
void entry_0015cb84_0x15cb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb84_0x15cb84");
#endif

    ctx->pc = 0x15cb84u;

label_15cb84:
    // 0x15cb84: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
label_15cb88:
    if (ctx->pc == 0x15CB88u) {
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB8Cu;
        goto label_15cb8c;
    }
    ctx->pc = 0x15CB84u;
    {
        const bool branch_taken_0x15cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb84) {
            ctx->pc = 0x15CB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB84u;
            // 0x15cb88: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD7Cu;
            return;
        }
    }
    ctx->pc = 0x15CB8Cu;
label_15cb8c:
    // 0x15cb8c: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15cb90:
    if (ctx->pc == 0x15CB90u) {
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB94u;
        goto label_15cb94;
    }
    ctx->pc = 0x15CB8Cu;
    {
        const bool branch_taken_0x15cb8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb8c) {
            ctx->pc = 0x15CC38u;
            return;
        }
    }
    ctx->pc = 0x15CB94u;
label_15cb94:
    // 0x15cb94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cb98:
    // 0x15cb98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cb9c:
    // 0x15cb9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15cba0:
    // 0x15cba0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15cba4:
    if (ctx->pc == 0x15CBA4u) {
        ctx->pc = 0x15CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBA0u;
        // 0x15cba4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBA8u;
        goto label_15cba8;
    }
    ctx->pc = 0x15CBA0u;
    {
        const bool branch_taken_0x15cba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBA0u;
        // 0x15cba4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cba0) {
            ctx->pc = 0x15CBC4u;
            return;
        }
    }
    ctx->pc = 0x15CBA8u;
label_15cba8:
    // 0x15cba8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cbac:
    // 0x15cbac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cbb0:
    // 0x15cbb0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cbb4:
    // 0x15cbb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cbb8:
    // 0x15cbb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cbbc:
    // 0x15cbbc: 0x60f809  jalr        $v1
label_15cbc0:
    if (ctx->pc == 0x15CBC0u) {
        ctx->pc = 0x15CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBBCu;
        // 0x15cbc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBC4u;
        goto label_fallthrough_0x15cbbc;
    }
    ctx->pc = 0x15CBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CBC4u);
        ctx->pc = 0x15CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBBCu;
        // 0x15cbc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBBCu, 0x15CBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cbbc:
    ctx->pc = 0x15CBC4u;
}
