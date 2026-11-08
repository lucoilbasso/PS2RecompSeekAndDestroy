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

// Function: entry_00197ac4
// Address: 0x197ac4 - 0x197b10
void entry_00197ac4_0x197ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197ac4_0x197ac4");
#endif

    switch (ctx->pc) {
        case 0x197ad0u: goto label_197ad0;
        case 0x197afcu: goto label_197afc;
        default: break;
    }

    ctx->pc = 0x197ac4u;

    // 0x197ac4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x197ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x197ac8: 0xc064e54  jal         func_193950
    ctx->pc = 0x197AC8u;
    SET_GPR_U32(ctx, 31, 0x197AD0u);
    ctx->pc = 0x197ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AC8u;
    // 0x197acc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x197AC8u, 0x197AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AD0u;
label_197ad0:
    // 0x197ad0: 0x260301b4  addiu       $v1, $s0, 0x1B4
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x197ad4: 0x24020946  addiu       $v0, $zero, 0x946
    ctx->pc = 0x197ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x197ad8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x197ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x197adc: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x197adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ae0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x197ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x197ae4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x197ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x197ae8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x197ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x197aec: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x197aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x197af0: 0xc78c85c8  lwc1        $f12, -0x7A38($gp)
    ctx->pc = 0x197af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197af4: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x197AF4u;
    SET_GPR_U32(ctx, 31, 0x197AFCu);
    ctx->pc = 0x197AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AF4u;
    // 0x197af8: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x197AF4u, 0x197AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AFCu;
label_197afc:
    // 0x197afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197b04: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197B04u;
    {
        const bool branch_taken_0x197b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B04u;
        // 0x197b08: 0xae02019c  sw          $v0, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b04) {
            ctx->pc = 0x197B10u;
            return;
        }
    }
    ctx->pc = 0x197B0Cu;
    // 0x197b0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x197b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x197b10u;
}
