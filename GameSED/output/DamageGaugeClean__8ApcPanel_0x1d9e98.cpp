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

// Function: DamageGaugeClean__8ApcPanel
// Address: 0x1d9e98 - 0x1da030
void DamageGaugeClean__8ApcPanel_0x1d9e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageGaugeClean__8ApcPanel_0x1d9e98");
#endif

    switch (ctx->pc) {
        case 0x1d9e98u: goto label_1d9e98;
        case 0x1d9e9cu: goto label_1d9e9c;
        case 0x1d9ea0u: goto label_1d9ea0;
        case 0x1d9ea4u: goto label_1d9ea4;
        case 0x1d9ea8u: goto label_1d9ea8;
        case 0x1d9eacu: goto label_1d9eac;
        case 0x1d9eb0u: goto label_1d9eb0;
        case 0x1d9eb4u: goto label_1d9eb4;
        case 0x1d9eb8u: goto label_1d9eb8;
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ec0u: goto label_1d9ec0;
        case 0x1d9ec4u: goto label_1d9ec4;
        case 0x1d9ec8u: goto label_1d9ec8;
        case 0x1d9eccu: goto label_1d9ecc;
        case 0x1d9ed0u: goto label_1d9ed0;
        case 0x1d9ed4u: goto label_1d9ed4;
        case 0x1d9ed8u: goto label_1d9ed8;
        case 0x1d9edcu: goto label_1d9edc;
        case 0x1d9ee0u: goto label_1d9ee0;
        case 0x1d9ee4u: goto label_1d9ee4;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9eecu: goto label_1d9eec;
        case 0x1d9ef0u: goto label_1d9ef0;
        case 0x1d9ef4u: goto label_1d9ef4;
        case 0x1d9ef8u: goto label_1d9ef8;
        case 0x1d9efcu: goto label_1d9efc;
        case 0x1d9f00u: goto label_1d9f00;
        case 0x1d9f04u: goto label_1d9f04;
        case 0x1d9f08u: goto label_1d9f08;
        case 0x1d9f0cu: goto label_1d9f0c;
        case 0x1d9f10u: goto label_1d9f10;
        case 0x1d9f14u: goto label_1d9f14;
        case 0x1d9f18u: goto label_1d9f18;
        case 0x1d9f1cu: goto label_1d9f1c;
        case 0x1d9f20u: goto label_1d9f20;
        case 0x1d9f24u: goto label_1d9f24;
        case 0x1d9f28u: goto label_1d9f28;
        case 0x1d9f2cu: goto label_1d9f2c;
        case 0x1d9f30u: goto label_1d9f30;
        case 0x1d9f34u: goto label_1d9f34;
        case 0x1d9f38u: goto label_1d9f38;
        case 0x1d9f3cu: goto label_1d9f3c;
        case 0x1d9f40u: goto label_1d9f40;
        case 0x1d9f44u: goto label_1d9f44;
        case 0x1d9f48u: goto label_1d9f48;
        case 0x1d9f4cu: goto label_1d9f4c;
        case 0x1d9f50u: goto label_1d9f50;
        case 0x1d9f54u: goto label_1d9f54;
        case 0x1d9f58u: goto label_1d9f58;
        case 0x1d9f5cu: goto label_1d9f5c;
        case 0x1d9f60u: goto label_1d9f60;
        case 0x1d9f64u: goto label_1d9f64;
        case 0x1d9f68u: goto label_1d9f68;
        case 0x1d9f6cu: goto label_1d9f6c;
        case 0x1d9f70u: goto label_1d9f70;
        case 0x1d9f74u: goto label_1d9f74;
        case 0x1d9f78u: goto label_1d9f78;
        case 0x1d9f7cu: goto label_1d9f7c;
        case 0x1d9f80u: goto label_1d9f80;
        case 0x1d9f84u: goto label_1d9f84;
        case 0x1d9f88u: goto label_1d9f88;
        case 0x1d9f8cu: goto label_1d9f8c;
        case 0x1d9f90u: goto label_1d9f90;
        case 0x1d9f94u: goto label_1d9f94;
        case 0x1d9f98u: goto label_1d9f98;
        case 0x1d9f9cu: goto label_1d9f9c;
        case 0x1d9fa0u: goto label_1d9fa0;
        case 0x1d9fa4u: goto label_1d9fa4;
        case 0x1d9fa8u: goto label_1d9fa8;
        case 0x1d9facu: goto label_1d9fac;
        case 0x1d9fb0u: goto label_1d9fb0;
        case 0x1d9fb4u: goto label_1d9fb4;
        case 0x1d9fb8u: goto label_1d9fb8;
        case 0x1d9fbcu: goto label_1d9fbc;
        case 0x1d9fc0u: goto label_1d9fc0;
        case 0x1d9fc4u: goto label_1d9fc4;
        case 0x1d9fc8u: goto label_1d9fc8;
        case 0x1d9fccu: goto label_1d9fcc;
        case 0x1d9fd0u: goto label_1d9fd0;
        case 0x1d9fd4u: goto label_1d9fd4;
        case 0x1d9fd8u: goto label_1d9fd8;
        case 0x1d9fdcu: goto label_1d9fdc;
        case 0x1d9fe0u: goto label_1d9fe0;
        case 0x1d9fe4u: goto label_1d9fe4;
        case 0x1d9fe8u: goto label_1d9fe8;
        case 0x1d9fecu: goto label_1d9fec;
        case 0x1d9ff0u: goto label_1d9ff0;
        case 0x1d9ff4u: goto label_1d9ff4;
        case 0x1d9ff8u: goto label_1d9ff8;
        case 0x1d9ffcu: goto label_1d9ffc;
        case 0x1da000u: goto label_1da000;
        case 0x1da004u: goto label_1da004;
        case 0x1da008u: goto label_1da008;
        case 0x1da00cu: goto label_1da00c;
        case 0x1da010u: goto label_1da010;
        case 0x1da014u: goto label_1da014;
        case 0x1da018u: goto label_1da018;
        case 0x1da01cu: goto label_1da01c;
        case 0x1da020u: goto label_1da020;
        case 0x1da024u: goto label_1da024;
        case 0x1da028u: goto label_1da028;
        case 0x1da02cu: goto label_1da02c;
        default: break;
    }

    ctx->pc = 0x1d9e98u;

label_1d9e98:
    // 0x1d9e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d9e9c:
    // 0x1d9e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d9ea0:
    // 0x1d9ea0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d9ea4:
    // 0x1d9ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ea8:
    // 0x1d9ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d9eac:
    // 0x1d9eac: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1d9eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1d9eb0:
    // 0x1d9eb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d9eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9eb4:
    // 0x1d9eb4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9eb8:
    if (ctx->pc == 0x1D9EB8u) {
        ctx->pc = 0x1D9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB4u;
        // 0x1d9eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EBCu;
        goto label_1d9ebc;
    }
    ctx->pc = 0x1D9EB4u;
    {
        const bool branch_taken_0x1d9eb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB4u;
        // 0x1d9eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eb4) {
            ctx->pc = 0x1D9ED4u;
            goto label_1d9ed4;
        }
    }
    ctx->pc = 0x1D9EBCu;
label_1d9ebc:
    // 0x1d9ebc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9ec0:
    // 0x1d9ec0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9ec4:
    // 0x1d9ec4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9ec8:
    // 0x1d9ec8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9ecc:
    // 0x1d9ecc: 0x60f809  jalr        $v1
label_1d9ed0:
    if (ctx->pc == 0x1D9ED0u) {
        ctx->pc = 0x1D9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ECCu;
        // 0x1d9ed0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9ED4u;
        goto label_1d9ed4;
    }
    ctx->pc = 0x1D9ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9ED4u);
        ctx->pc = 0x1D9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ECCu;
        // 0x1d9ed0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9ECCu, 0x1D9ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9ED4u;
label_1d9ed4:
    // 0x1d9ed4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d9ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d9ed8:
    // 0x1d9ed8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9edc:
    if (ctx->pc == 0x1D9EDCu) {
        ctx->pc = 0x1D9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED8u;
        // 0x1d9edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EE0u;
        goto label_1d9ee0;
    }
    ctx->pc = 0x1D9ED8u;
    {
        const bool branch_taken_0x1d9ed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED8u;
        // 0x1d9edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ed8) {
            ctx->pc = 0x1D9EF8u;
            goto label_1d9ef8;
        }
    }
    ctx->pc = 0x1D9EE0u;
label_1d9ee0:
    // 0x1d9ee0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9ee4:
    // 0x1d9ee4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9ee8:
    // 0x1d9ee8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9eec:
    // 0x1d9eec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9ef0:
    // 0x1d9ef0: 0x60f809  jalr        $v1
label_1d9ef4:
    if (ctx->pc == 0x1D9EF4u) {
        ctx->pc = 0x1D9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF0u;
        // 0x1d9ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EF8u;
        goto label_1d9ef8;
    }
    ctx->pc = 0x1D9EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9EF8u);
        ctx->pc = 0x1D9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF0u;
        // 0x1d9ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EF0u, 0x1D9EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9EF8u;
label_1d9ef8:
    // 0x1d9ef8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d9efc:
    // 0x1d9efc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9f00:
    if (ctx->pc == 0x1D9F00u) {
        ctx->pc = 0x1D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFCu;
        // 0x1d9f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F04u;
        goto label_1d9f04;
    }
    ctx->pc = 0x1D9EFCu;
    {
        const bool branch_taken_0x1d9efc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFCu;
        // 0x1d9f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9efc) {
            ctx->pc = 0x1D9F1Cu;
            goto label_1d9f1c;
        }
    }
    ctx->pc = 0x1D9F04u;
label_1d9f04:
    // 0x1d9f04: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9f08:
    // 0x1d9f08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9f0c:
    // 0x1d9f0c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9f0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9f10:
    // 0x1d9f10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9f14:
    // 0x1d9f14: 0x60f809  jalr        $v1
label_1d9f18:
    if (ctx->pc == 0x1D9F18u) {
        ctx->pc = 0x1D9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F14u;
        // 0x1d9f18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F1Cu;
        goto label_1d9f1c;
    }
    ctx->pc = 0x1D9F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9F1Cu);
        ctx->pc = 0x1D9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F14u;
        // 0x1d9f18: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F14u, 0x1D9F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F1Cu;
label_1d9f1c:
    // 0x1d9f1c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d9f20:
    // 0x1d9f20: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9f24:
    if (ctx->pc == 0x1D9F24u) {
        ctx->pc = 0x1D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F20u;
        // 0x1d9f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F28u;
        goto label_1d9f28;
    }
    ctx->pc = 0x1D9F20u;
    {
        const bool branch_taken_0x1d9f20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F20u;
        // 0x1d9f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f20) {
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9F28u;
label_1d9f28:
    // 0x1d9f28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9f2c:
    // 0x1d9f2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9f30:
    // 0x1d9f30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9f34:
    // 0x1d9f34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9f38:
    // 0x1d9f38: 0x60f809  jalr        $v1
label_1d9f3c:
    if (ctx->pc == 0x1D9F3Cu) {
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F40u;
        goto label_1d9f40;
    }
    ctx->pc = 0x1D9F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9F40u);
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F38u, 0x1D9F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F40u;
label_1d9f40:
    // 0x1d9f40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d9f44:
    // 0x1d9f44: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1d9f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1d9f48:
    // 0x1d9f48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d9f4c:
    // 0x1d9f4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1d9f50:
    // 0x1d9f50: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1d9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1d9f54:
    // 0x1d9f54: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d9f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9f58:
    // 0x1d9f58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1d9f5c:
    // 0x1d9f5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1d9f60:
    // 0x1d9f60: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1d9f64:
    // 0x1d9f64: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1d9f68:
    // 0x1d9f68: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d9f6c:
    if (ctx->pc == 0x1D9F6Cu) {
        ctx->pc = 0x1D9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F68u;
        // 0x1d9f6c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F70u;
        goto label_1d9f70;
    }
    ctx->pc = 0x1D9F68u;
    {
        const bool branch_taken_0x1d9f68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F68u;
        // 0x1d9f6c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f68) {
            ctx->pc = 0x1D9F8Cu;
            goto label_1d9f8c;
        }
    }
    ctx->pc = 0x1D9F70u;
label_1d9f70:
    // 0x1d9f70: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9f74:
    // 0x1d9f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f78:
    // 0x1d9f78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9f7c:
    // 0x1d9f7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9f80:
    // 0x1d9f80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9f84:
    // 0x1d9f84: 0x60f809  jalr        $v1
label_1d9f88:
    if (ctx->pc == 0x1D9F88u) {
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F8Cu;
        goto label_1d9f8c;
    }
    ctx->pc = 0x1D9F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9F8Cu);
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F84u, 0x1D9F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F8Cu;
label_1d9f8c:
    // 0x1d9f8c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1d9f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d9f90:
    // 0x1d9f90: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9f94:
    if (ctx->pc == 0x1D9F94u) {
        ctx->pc = 0x1D9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F90u;
        // 0x1d9f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F98u;
        goto label_1d9f98;
    }
    ctx->pc = 0x1D9F90u;
    {
        const bool branch_taken_0x1d9f90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F90u;
        // 0x1d9f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f90) {
            ctx->pc = 0x1D9FB0u;
            goto label_1d9fb0;
        }
    }
    ctx->pc = 0x1D9F98u;
label_1d9f98:
    // 0x1d9f98: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9f9c:
    // 0x1d9f9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9fa0:
    // 0x1d9fa0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9fa4:
    // 0x1d9fa4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9fa8:
    // 0x1d9fa8: 0x60f809  jalr        $v1
label_1d9fac:
    if (ctx->pc == 0x1D9FACu) {
        ctx->pc = 0x1D9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FA8u;
        // 0x1d9fac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FB0u;
        goto label_1d9fb0;
    }
    ctx->pc = 0x1D9FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9FB0u);
        ctx->pc = 0x1D9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FA8u;
        // 0x1d9fac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FA8u, 0x1D9FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9FB0u;
label_1d9fb0:
    // 0x1d9fb0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1d9fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d9fb4:
    // 0x1d9fb4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9fb8:
    if (ctx->pc == 0x1D9FB8u) {
        ctx->pc = 0x1D9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FB4u;
        // 0x1d9fb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FBCu;
        goto label_1d9fbc;
    }
    ctx->pc = 0x1D9FB4u;
    {
        const bool branch_taken_0x1d9fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FB4u;
        // 0x1d9fb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fb4) {
            ctx->pc = 0x1D9FD4u;
            goto label_1d9fd4;
        }
    }
    ctx->pc = 0x1D9FBCu;
label_1d9fbc:
    // 0x1d9fbc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9fc0:
    // 0x1d9fc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9fc4:
    // 0x1d9fc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9fc8:
    // 0x1d9fc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9fcc:
    // 0x1d9fcc: 0x60f809  jalr        $v1
label_1d9fd0:
    if (ctx->pc == 0x1D9FD0u) {
        ctx->pc = 0x1D9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FCCu;
        // 0x1d9fd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FD4u;
        goto label_1d9fd4;
    }
    ctx->pc = 0x1D9FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9FD4u);
        ctx->pc = 0x1D9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FCCu;
        // 0x1d9fd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FCCu, 0x1D9FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9FD4u;
label_1d9fd4:
    // 0x1d9fd4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1d9fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d9fd8:
    // 0x1d9fd8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9fdc:
    if (ctx->pc == 0x1D9FDCu) {
        ctx->pc = 0x1D9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FD8u;
        // 0x1d9fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FE0u;
        goto label_1d9fe0;
    }
    ctx->pc = 0x1D9FD8u;
    {
        const bool branch_taken_0x1d9fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FD8u;
        // 0x1d9fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fd8) {
            ctx->pc = 0x1D9FF8u;
            goto label_1d9ff8;
        }
    }
    ctx->pc = 0x1D9FE0u;
label_1d9fe0:
    // 0x1d9fe0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9fe4:
    // 0x1d9fe4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9fe8:
    // 0x1d9fe8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9fec:
    // 0x1d9fec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9ff0:
    // 0x1d9ff0: 0x60f809  jalr        $v1
label_1d9ff4:
    if (ctx->pc == 0x1D9FF4u) {
        ctx->pc = 0x1D9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FF0u;
        // 0x1d9ff4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FF8u;
        goto label_1d9ff8;
    }
    ctx->pc = 0x1D9FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9FF8u);
        ctx->pc = 0x1D9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FF0u;
        // 0x1d9ff4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FF0u, 0x1D9FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9FF8u;
label_1d9ff8:
    // 0x1d9ff8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1d9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_1d9ffc:
    // 0x1d9ffc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1da000:
    // 0x1da000: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1da000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1da004:
    // 0x1da004: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1da004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1da008:
    // 0x1da008: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1da008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1da00c:
    // 0x1da00c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1da00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1da010:
    // 0x1da010: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1da010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_1da014:
    // 0x1da014: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1da014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1da018:
    // 0x1da018: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1da018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1da01c:
    // 0x1da01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da020:
    // 0x1da020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1da024:
    // 0x1da024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1da028:
    // 0x1da028: 0x3e00008  jr          $ra
label_1da02c:
    if (ctx->pc == 0x1DA02Cu) {
        ctx->pc = 0x1DA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA028u;
        // 0x1da02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA030u;
        goto label_fallthrough_0x1da028;
    }
    ctx->pc = 0x1DA028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA028u;
        // 0x1da02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da028:
    ctx->pc = 0x1DA030u;
}
