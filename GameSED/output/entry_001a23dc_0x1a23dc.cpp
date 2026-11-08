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

// Function: entry_001a23dc
// Address: 0x1a23dc - 0x1a2418
void entry_001a23dc_0x1a23dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23dc_0x1a23dc");
#endif

    switch (ctx->pc) {
        case 0x1a240cu: goto label_1a240c;
        default: break;
    }

    ctx->pc = 0x1a23dcu;

label_1a23dc:
    // 0x1a23dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a23dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a23e0:
    // 0x1a23e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a23e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a23e4:
    // 0x1a23e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a23e8:
    // 0x1a23e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a23ec:
    // 0x1a23ec: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1a23ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a23f0:
    // 0x1a23f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a23f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a23f4:
    // 0x1a23f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a23f8:
    // 0x1a23f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a23fc:
    if (ctx->pc == 0x1A23FCu) {
        ctx->pc = 0x1A23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F8u;
        // 0x1a23fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2400u;
        goto label_1a2400;
    }
    ctx->pc = 0x1A23F8u;
    {
        const bool branch_taken_0x1a23f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F8u;
        // 0x1a23fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23f8) {
            ctx->pc = 0x1A2418u;
            return;
        }
    }
    ctx->pc = 0x1A2400u;
label_1a2400:
    // 0x1a2400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a2404:
    // 0x1a2404: 0x40f809  jalr        $v0
label_1a2408:
    if (ctx->pc == 0x1A2408u) {
        ctx->pc = 0x1A2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2404u;
        // 0x1a2408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A240Cu;
        goto label_1a240c;
    }
    ctx->pc = 0x1A2404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A240Cu);
        ctx->pc = 0x1A2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2404u;
        // 0x1a2408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2404u, 0x1A240Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A240Cu;
label_1a240c:
    // 0x1a240c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a2410:
    if (ctx->pc == 0x1A2410u) {
        ctx->pc = 0x1A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A240Cu;
        // 0x1a2410: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2414u;
        goto label_1a2414;
    }
    ctx->pc = 0x1A240Cu;
    {
        const bool branch_taken_0x1a240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A240Cu;
        // 0x1a2410: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a240c) {
            ctx->pc = 0x1A2448u;
            return;
        }
    }
    ctx->pc = 0x1A2414u;
label_1a2414:
    // 0x1a2414: 0x0  nop
    ctx->pc = 0x1a2414u;
    // NOP
    ctx->pc = 0x1a2418u;
}
