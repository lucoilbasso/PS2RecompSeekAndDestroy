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

// Function: entry_00108968
// Address: 0x108968 - 0x108988
void entry_00108968_0x108968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108968_0x108968");
#endif

    switch (ctx->pc) {
        case 0x10897cu: goto label_10897c;
        default: break;
    }

    ctx->pc = 0x108968u;

    // 0x108968: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10896c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10896cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x108970: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108974: 0xc06927c  jal         func_1A49F0
    ctx->pc = 0x108974u;
    SET_GPR_U32(ctx, 31, 0x10897Cu);
    ctx->pc = 0x108978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108974u;
    // 0x108978: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49F0u, 0x108974u, 0x10897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10897Cu;
label_10897c:
    // 0x10897c: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x10897Cu;
    {
        const bool branch_taken_0x10897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10897Cu;
        // 0x108980: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10897c) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108984u;
    // 0x108984: 0x0  nop
    ctx->pc = 0x108984u;
    // NOP
    ctx->pc = 0x108988u;
}
