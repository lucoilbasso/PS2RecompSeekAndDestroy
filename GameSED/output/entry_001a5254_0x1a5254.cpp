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

// Function: entry_001a5254
// Address: 0x1a5254 - 0x1a5288
void entry_001a5254_0x1a5254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5254_0x1a5254");
#endif

    switch (ctx->pc) {
        case 0x1a5274u: goto label_1a5274;
        default: break;
    }

    ctx->pc = 0x1a5254u;

    // 0x1a5254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a525c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5260: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1a5260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a5264: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a5264u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a5268: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a526c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A526Cu;
    SET_GPR_U32(ctx, 31, 0x1A5274u);
    ctx->pc = 0x1A5270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A526Cu;
    // 0x1a5270: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A526Cu, 0x1A5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5274u;
label_1a5274:
    // 0x1a5274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5278: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a527c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A527Cu;
    {
        const bool branch_taken_0x1a527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A527Cu;
        // 0x1a5280: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a527c) {
            ctx->pc = 0x1A5288u;
            return;
        }
    }
    ctx->pc = 0x1A5284u;
    // 0x1a5284: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1a5284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1a5288u;
}
