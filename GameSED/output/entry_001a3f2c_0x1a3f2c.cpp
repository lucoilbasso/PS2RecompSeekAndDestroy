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

// Function: entry_001a3f2c
// Address: 0x1a3f2c - 0x1a3f78
void entry_001a3f2c_0x1a3f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3f2c_0x1a3f2c");
#endif

    switch (ctx->pc) {
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f6cu: goto label_1a3f6c;
        default: break;
    }

    ctx->pc = 0x1a3f2cu;

label_1a3f2c:
    // 0x1a3f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3f30:
    // 0x1a3f30: 0x4c20021  bltzl       $a2, . + 4 + (0x21 << 2)
label_1a3f34:
    if (ctx->pc == 0x1A3F34u) {
        ctx->pc = 0x1A3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F30u;
        // 0x1a3f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F38u;
        goto label_1a3f38;
    }
    ctx->pc = 0x1A3F30u;
    {
        const bool branch_taken_0x1a3f30 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a3f30) {
            ctx->pc = 0x1A3F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3F30u;
            // 0x1a3f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3FB8u;
            return;
        }
    }
    ctx->pc = 0x1A3F38u;
label_1a3f38:
    // 0x1a3f38: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1a3f3c:
    if (ctx->pc == 0x1A3F3Cu) {
        ctx->pc = 0x1A3F40u;
        goto label_1a3f40;
    }
    ctx->pc = 0x1A3F38u;
    {
        const bool branch_taken_0x1a3f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f38) {
            ctx->pc = 0x1A3FA8u;
            return;
        }
    }
    ctx->pc = 0x1A3F40u;
label_1a3f40:
    // 0x1a3f40: 0xc06a67a  jal         func_1A99E8
label_1a3f44:
    if (ctx->pc == 0x1A3F44u) {
        ctx->pc = 0x1A3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F40u;
        // 0x1a3f44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F48u;
        goto label_1a3f48;
    }
    ctx->pc = 0x1A3F40u;
    SET_GPR_U32(ctx, 31, 0x1A3F48u);
    ctx->pc = 0x1A3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F40u;
    // 0x1a3f44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A99E8u, 0x1A3F40u, 0x1A3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F48u;
label_1a3f48:
    // 0x1a3f48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3f4c:
    // 0x1a3f4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a3f50:
    if (ctx->pc == 0x1A3F50u) {
        ctx->pc = 0x1A3F54u;
        goto label_1a3f54;
    }
    ctx->pc = 0x1A3F4Cu;
    {
        const bool branch_taken_0x1a3f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f4c) {
            ctx->pc = 0x1A3FB0u;
            return;
        }
    }
    ctx->pc = 0x1A3F54u;
label_1a3f54:
    // 0x1a3f54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3f58:
    // 0x1a3f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3f5c:
    if (ctx->pc == 0x1A3F5Cu) {
        ctx->pc = 0x1A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F58u;
        // 0x1a3f5c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F60u;
        goto label_1a3f60;
    }
    ctx->pc = 0x1A3F58u;
    {
        const bool branch_taken_0x1a3f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F58u;
        // 0x1a3f5c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f58) {
            ctx->pc = 0x1A3F78u;
            return;
        }
    }
    ctx->pc = 0x1A3F60u;
label_1a3f60:
    // 0x1a3f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f64:
    // 0x1a3f64: 0x40f809  jalr        $v0
label_1a3f68:
    if (ctx->pc == 0x1A3F68u) {
        ctx->pc = 0x1A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F64u;
        // 0x1a3f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F6Cu;
        goto label_1a3f6c;
    }
    ctx->pc = 0x1A3F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3F6Cu);
        ctx->pc = 0x1A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F64u;
        // 0x1a3f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F64u, 0x1A3F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3F6Cu;
label_1a3f6c:
    // 0x1a3f6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a3f70:
    if (ctx->pc == 0x1A3F70u) {
        ctx->pc = 0x1A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F6Cu;
        // 0x1a3f70: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F74u;
        goto label_1a3f74;
    }
    ctx->pc = 0x1A3F6Cu;
    {
        const bool branch_taken_0x1a3f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F6Cu;
        // 0x1a3f70: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f6c) {
            ctx->pc = 0x1A3F90u;
            return;
        }
    }
    ctx->pc = 0x1A3F74u;
label_1a3f74:
    // 0x1a3f74: 0x0  nop
    ctx->pc = 0x1a3f74u;
    // NOP
    ctx->pc = 0x1a3f78u;
}
