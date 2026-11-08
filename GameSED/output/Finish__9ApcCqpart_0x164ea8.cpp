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

// Function: Finish__9ApcCqpart
// Address: 0x164ea8 - 0x164f80
void Finish__9ApcCqpart_0x164ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcCqpart_0x164ea8");
#endif

    switch (ctx->pc) {
        case 0x164ea8u: goto label_164ea8;
        case 0x164eacu: goto label_164eac;
        case 0x164eb0u: goto label_164eb0;
        case 0x164eb4u: goto label_164eb4;
        case 0x164eb8u: goto label_164eb8;
        case 0x164ebcu: goto label_164ebc;
        case 0x164ec0u: goto label_164ec0;
        case 0x164ec4u: goto label_164ec4;
        case 0x164ec8u: goto label_164ec8;
        case 0x164eccu: goto label_164ecc;
        case 0x164ed0u: goto label_164ed0;
        case 0x164ed4u: goto label_164ed4;
        case 0x164ed8u: goto label_164ed8;
        case 0x164edcu: goto label_164edc;
        case 0x164ee0u: goto label_164ee0;
        case 0x164ee4u: goto label_164ee4;
        case 0x164ee8u: goto label_164ee8;
        case 0x164eecu: goto label_164eec;
        case 0x164ef0u: goto label_164ef0;
        case 0x164ef4u: goto label_164ef4;
        case 0x164ef8u: goto label_164ef8;
        case 0x164efcu: goto label_164efc;
        case 0x164f00u: goto label_164f00;
        case 0x164f04u: goto label_164f04;
        case 0x164f08u: goto label_164f08;
        case 0x164f0cu: goto label_164f0c;
        case 0x164f10u: goto label_164f10;
        case 0x164f14u: goto label_164f14;
        case 0x164f18u: goto label_164f18;
        case 0x164f1cu: goto label_164f1c;
        case 0x164f20u: goto label_164f20;
        case 0x164f24u: goto label_164f24;
        case 0x164f28u: goto label_164f28;
        case 0x164f2cu: goto label_164f2c;
        case 0x164f30u: goto label_164f30;
        case 0x164f34u: goto label_164f34;
        case 0x164f38u: goto label_164f38;
        case 0x164f3cu: goto label_164f3c;
        case 0x164f40u: goto label_164f40;
        case 0x164f44u: goto label_164f44;
        case 0x164f48u: goto label_164f48;
        case 0x164f4cu: goto label_164f4c;
        case 0x164f50u: goto label_164f50;
        case 0x164f54u: goto label_164f54;
        case 0x164f58u: goto label_164f58;
        case 0x164f5cu: goto label_164f5c;
        case 0x164f60u: goto label_164f60;
        case 0x164f64u: goto label_164f64;
        case 0x164f68u: goto label_164f68;
        case 0x164f6cu: goto label_164f6c;
        case 0x164f70u: goto label_164f70;
        case 0x164f74u: goto label_164f74;
        case 0x164f78u: goto label_164f78;
        case 0x164f7cu: goto label_164f7c;
        default: break;
    }

    ctx->pc = 0x164ea8u;

label_164ea8:
    // 0x164ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_164eac:
    // 0x164eac: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x164eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_164eb0:
    // 0x164eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_164eb4:
    // 0x164eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164eb8:
    // 0x164eb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_164ebc:
    // 0x164ebc: 0x26041234  addiu       $a0, $s0, 0x1234
    ctx->pc = 0x164ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4660));
label_164ec0:
    // 0x164ec0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164ec4:
    // 0x164ec4: 0x0  nop
    ctx->pc = 0x164ec4u;
    // NOP
label_164ec8:
    // 0x164ec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_164ecc:
    // 0x164ecc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_164ed0:
    if (ctx->pc == 0x164ED0u) {
        ctx->pc = 0x164ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ECCu;
        // 0x164ed0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164ED4u;
        goto label_164ed4;
    }
    ctx->pc = 0x164ECCu;
    {
        const bool branch_taken_0x164ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ECCu;
        // 0x164ed0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ecc) {
            ctx->pc = 0x164EE4u;
            goto label_164ee4;
        }
    }
    ctx->pc = 0x164ED4u;
label_164ed4:
    // 0x164ed4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_164ed8:
    // 0x164ed8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x164ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_164edc:
    // 0x164edc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x164edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_164ee0:
    // 0x164ee0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x164ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_164ee4:
    // 0x164ee4: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
label_164ee8:
    if (ctx->pc == 0x164EE8u) {
        ctx->pc = 0x164EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE4u;
        // 0x164ee8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EECu;
        goto label_164eec;
    }
    ctx->pc = 0x164EE4u;
    {
        const bool branch_taken_0x164ee4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x164EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE4u;
        // 0x164ee8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ee4) {
            ctx->pc = 0x164EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164ec8;
        }
    }
    ctx->pc = 0x164EECu;
label_164eec:
    // 0x164eec: 0x8e061230  lw          $a2, 0x1230($s0)
    ctx->pc = 0x164eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_164ef0:
    // 0x164ef0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_164ef4:
    if (ctx->pc == 0x164EF4u) {
        ctx->pc = 0x164EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EF0u;
        // 0x164ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164EF8u;
        goto label_164ef8;
    }
    ctx->pc = 0x164EF0u;
    {
        const bool branch_taken_0x164ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EF0u;
        // 0x164ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ef0) {
            ctx->pc = 0x164F10u;
            goto label_164f10;
        }
    }
    ctx->pc = 0x164EF8u;
label_164ef8:
    // 0x164ef8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_164efc:
    // 0x164efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_164f00:
    // 0x164f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x164f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_164f04:
    // 0x164f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_164f08:
    // 0x164f08: 0x60f809  jalr        $v1
label_164f0c:
    if (ctx->pc == 0x164F0Cu) {
        ctx->pc = 0x164F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F08u;
        // 0x164f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F10u;
        goto label_164f10;
    }
    ctx->pc = 0x164F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x164F10u);
        ctx->pc = 0x164F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F08u;
        // 0x164f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F08u, 0x164F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164F10u;
label_164f10:
    // 0x164f10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_164f14:
    // 0x164f14: 0x26031258  addiu       $v1, $s0, 0x1258
    ctx->pc = 0x164f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4696));
label_164f18:
    // 0x164f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164f1c:
    // 0x164f1c: 0x0  nop
    ctx->pc = 0x164f1cu;
    // NOP
label_164f20:
    // 0x164f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_164f24:
    // 0x164f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_164f28:
    if (ctx->pc == 0x164F28u) {
        ctx->pc = 0x164F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F24u;
        // 0x164f28: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F2Cu;
        goto label_164f2c;
    }
    ctx->pc = 0x164F24u;
    {
        const bool branch_taken_0x164f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F24u;
        // 0x164f28: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f24) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F2Cu;
label_164f2c:
    // 0x164f2c: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x164f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
label_164f30:
    // 0x164f30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x164f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_164f34:
    // 0x164f34: 0x0  nop
    ctx->pc = 0x164f34u;
    // NOP
label_164f38:
    // 0x164f38: 0x0  nop
    ctx->pc = 0x164f38u;
    // NOP
label_164f3c:
    // 0x164f3c: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_164f40:
    if (ctx->pc == 0x164F40u) {
        ctx->pc = 0x164F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F3Cu;
        // 0x164f40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F44u;
        goto label_164f44;
    }
    ctx->pc = 0x164F3Cu;
    {
        const bool branch_taken_0x164f3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x164F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F3Cu;
        // 0x164f40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f3c) {
            ctx->pc = 0x164F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164f20;
        }
    }
    ctx->pc = 0x164F44u;
label_164f44:
    // 0x164f44: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_164f48:
    // 0x164f48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x164f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_164f4c:
    // 0x164f4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x164f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_164f50:
    // 0x164f50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_164f54:
    if (ctx->pc == 0x164F54u) {
        ctx->pc = 0x164F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F50u;
        // 0x164f54: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F58u;
        goto label_164f58;
    }
    ctx->pc = 0x164F50u;
    {
        const bool branch_taken_0x164f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F50u;
        // 0x164f54: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f50) {
            ctx->pc = 0x164F68u;
            goto label_164f68;
        }
    }
    ctx->pc = 0x164F58u;
label_164f58:
    // 0x164f58: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x164f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_164f5c:
    // 0x164f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164f60:
    // 0x164f60: 0xc0685b8  jal         func_1A16E0
label_164f64:
    if (ctx->pc == 0x164F64u) {
        ctx->pc = 0x164F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F60u;
        // 0x164f64: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F68u;
        goto label_164f68;
    }
    ctx->pc = 0x164F60u;
    SET_GPR_U32(ctx, 31, 0x164F68u);
    ctx->pc = 0x164F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F60u;
    // 0x164f64: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x164F60u, 0x164F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F68u;
label_164f68:
    // 0x164f68: 0xc065e78  jal         func_1979E0
label_164f6c:
    if (ctx->pc == 0x164F6Cu) {
        ctx->pc = 0x164F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F68u;
        // 0x164f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F70u;
        goto label_164f70;
    }
    ctx->pc = 0x164F68u;
    SET_GPR_U32(ctx, 31, 0x164F70u);
    ctx->pc = 0x164F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F68u;
    // 0x164f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979E0u, 0x164F68u, 0x164F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F70u;
label_164f70:
    // 0x164f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164f74:
    // 0x164f74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x164f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_164f78:
    // 0x164f78: 0x3e00008  jr          $ra
label_164f7c:
    if (ctx->pc == 0x164F7Cu) {
        ctx->pc = 0x164F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F78u;
        // 0x164f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164F80u;
        goto label_fallthrough_0x164f78;
    }
    ctx->pc = 0x164F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F78u;
        // 0x164f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x164f78:
    ctx->pc = 0x164F80u;
}
