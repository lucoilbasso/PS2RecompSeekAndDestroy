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

// Function: entry_001340fc
// Address: 0x1340fc - 0x134150
void entry_001340fc_0x1340fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001340fc_0x1340fc");
#endif

    switch (ctx->pc) {
        case 0x134124u: goto label_134124;
        default: break;
    }

    ctx->pc = 0x1340fcu;

label_1340fc:
    // 0x1340fc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1340fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_134100:
    // 0x134100: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x134100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_134104:
    // 0x134104: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x134104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_134108:
    // 0x134108: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x134108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_13410c:
    // 0x13410c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_134110:
    // 0x134110: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x134110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_134114:
    // 0x134114: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x134114u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_134118:
    // 0x134118: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x134118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_13411c:
    // 0x13411c: 0xc06a26e  jal         func_1A89B8
label_134120:
    if (ctx->pc == 0x134120u) {
        ctx->pc = 0x134120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13411Cu;
        // 0x134120: 0x8c720040  lw          $s2, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134124u;
        goto label_134124;
    }
    ctx->pc = 0x13411Cu;
    SET_GPR_U32(ctx, 31, 0x134124u);
    ctx->pc = 0x134120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13411Cu;
    // 0x134120: 0x8c720040  lw          $s2, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13411Cu, 0x134124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134124u;
label_134124:
    // 0x134124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x134124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134128:
    // 0x134128: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x134128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_13412c:
    // 0x13412c: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
label_134130:
    if (ctx->pc == 0x134130u) {
        ctx->pc = 0x134130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13412Cu;
        // 0x134130: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x134134u;
        goto label_134134;
    }
    ctx->pc = 0x13412Cu;
    {
        const bool branch_taken_0x13412c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13412Cu;
        // 0x134130: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13412c) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x134134u;
label_134134:
    // 0x134134: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x134134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_134138:
    // 0x134138: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x134138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_13413c:
    // 0x13413c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_134140:
    // 0x134140: 0x8c6364f0  lw          $v1, 0x64F0($v1)
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25840)));
label_134144:
    // 0x134144: 0x600008  jr          $v1
label_134148:
    if (ctx->pc == 0x134148u) {
        ctx->pc = 0x13414Cu;
        goto label_13414c;
    }
    ctx->pc = 0x134144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13414Cu;
label_13414c:
    // 0x13414c: 0x0  nop
    ctx->pc = 0x13414cu;
    // NOP
    ctx->pc = 0x134150u;
}
