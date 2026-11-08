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

// Function: entry_0019157c
// Address: 0x19157c - 0x1915b0
void entry_0019157c_0x19157c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019157c_0x19157c");
#endif

    switch (ctx->pc) {
        case 0x191584u: goto label_191584;
        case 0x1915a4u: goto label_1915a4;
        default: break;
    }

    ctx->pc = 0x19157cu;

    // 0x19157c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19157Cu;
    SET_GPR_U32(ctx, 31, 0x191584u);
    ctx->pc = 0x191580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19157Cu;
    // 0x191580: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19157Cu, 0x191584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191584u;
label_191584:
    // 0x191584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191588: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x191588u;
    {
        const bool branch_taken_0x191588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191588) {
            ctx->pc = 0x19158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191588u;
            // 0x19158c: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1915B0u;
            return;
        }
    }
    ctx->pc = 0x191590u;
    // 0x191590: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x191594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191598: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x191598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x19159c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19159Cu;
    SET_GPR_U32(ctx, 31, 0x1915A4u);
    ctx->pc = 0x1915A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19159Cu;
    // 0x1915a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19159Cu, 0x1915A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915A4u;
label_1915a4:
    // 0x1915a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1915A4u;
    {
        const bool branch_taken_0x1915a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915A4u;
        // 0x1915a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915a4) {
            ctx->pc = 0x1915FCu;
            return;
        }
    }
    ctx->pc = 0x1915ACu;
    // 0x1915ac: 0x0  nop
    ctx->pc = 0x1915acu;
    // NOP
    ctx->pc = 0x1915b0u;
}
