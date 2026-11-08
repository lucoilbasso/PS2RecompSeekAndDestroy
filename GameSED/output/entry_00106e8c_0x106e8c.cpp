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

// Function: entry_00106e8c
// Address: 0x106e8c - 0x106ed0
void entry_00106e8c_0x106e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106e8c_0x106e8c");
#endif

    switch (ctx->pc) {
        case 0x106ea4u: goto label_106ea4;
        case 0x106ec4u: goto label_106ec4;
        default: break;
    }

    ctx->pc = 0x106e8cu;

label_106e8c:
    // 0x106e8c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_106e90:
    if (ctx->pc == 0x106E90u) {
        ctx->pc = 0x106E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E8Cu;
        // 0x106e90: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106E94u;
        goto label_106e94;
    }
    ctx->pc = 0x106E8Cu;
    {
        const bool branch_taken_0x106e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106e8c) {
            ctx->pc = 0x106E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E8Cu;
            // 0x106e90: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106ED0u;
            return;
        }
    }
    ctx->pc = 0x106E94u;
label_106e94:
    // 0x106e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106e98:
    // 0x106e98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x106e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_106e9c:
    // 0x106e9c: 0xc04112e  jal         func_1044B8
label_106ea0:
    if (ctx->pc == 0x106EA0u) {
        ctx->pc = 0x106EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E9Cu;
        // 0x106ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EA4u;
        goto label_106ea4;
    }
    ctx->pc = 0x106E9Cu;
    SET_GPR_U32(ctx, 31, 0x106EA4u);
    ctx->pc = 0x106EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E9Cu;
    // 0x106ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x106E9Cu, 0x106EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106EA4u;
label_106ea4:
    // 0x106ea4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x106ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_106ea8:
    // 0x106ea8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x106ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106eac:
    // 0x106eac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x106eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_106eb0:
    // 0x106eb0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_106eb4:
    // 0x106eb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x106eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_106eb8:
    // 0x106eb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_106ebc:
    // 0x106ebc: 0x60f809  jalr        $v1
label_106ec0:
    if (ctx->pc == 0x106EC0u) {
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EC4u;
        goto label_106ec4;
    }
    ctx->pc = 0x106EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106EC4u);
        ctx->pc = 0x106EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EBCu;
        // 0x106ec0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EBCu, 0x106EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106EC4u;
label_106ec4:
    // 0x106ec4: 0x10000007  b           . + 4 + (0x7 << 2)
label_106ec8:
    if (ctx->pc == 0x106EC8u) {
        ctx->pc = 0x106EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EC4u;
        // 0x106ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106ECCu;
        goto label_106ecc;
    }
    ctx->pc = 0x106EC4u;
    {
        const bool branch_taken_0x106ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EC4u;
        // 0x106ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ec4) {
            ctx->pc = 0x106EE4u;
            return;
        }
    }
    ctx->pc = 0x106ECCu;
label_106ecc:
    // 0x106ecc: 0x0  nop
    ctx->pc = 0x106eccu;
    // NOP
    ctx->pc = 0x106ed0u;
}
