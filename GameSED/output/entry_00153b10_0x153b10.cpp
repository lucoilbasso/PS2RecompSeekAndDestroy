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

// Function: entry_00153b10
// Address: 0x153b10 - 0x153b48
void entry_00153b10_0x153b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153b10_0x153b10");
#endif

    switch (ctx->pc) {
        case 0x153b3cu: goto label_153b3c;
        default: break;
    }

    ctx->pc = 0x153b10u;

    // 0x153b10: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x153B10u;
    {
        const bool branch_taken_0x153b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b10) {
            ctx->pc = 0x153B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153B10u;
            // 0x153b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153BA4u;
            return;
        }
    }
    ctx->pc = 0x153B18u;
    // 0x153b18: 0x8e2303b0  lw          $v1, 0x3B0($s1)
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x153b1c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x153b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x153b20: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x153B20u;
    {
        const bool branch_taken_0x153b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b20) {
            ctx->pc = 0x153B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153B20u;
            // 0x153b24: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B48u;
            return;
        }
    }
    ctx->pc = 0x153B28u;
    // 0x153b28: 0xc62c03c0  lwc1        $f12, 0x3C0($s1)
    ctx->pc = 0x153b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x153b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b30: 0xc62d03bc  lwc1        $f13, 0x3BC($s1)
    ctx->pc = 0x153b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x153b34: 0xc04c288  jal         func_130A20
    ctx->pc = 0x153B34u;
    SET_GPR_U32(ctx, 31, 0x153B3Cu);
    ctx->pc = 0x153B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B34u;
    // 0x153b38: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B34u, 0x153B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B3Cu;
label_153b3c:
    // 0x153b3c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x153B3Cu;
    {
        const bool branch_taken_0x153b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B3Cu;
        // 0x153b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b3c) {
            ctx->pc = 0x153BA4u;
            return;
        }
    }
    ctx->pc = 0x153B44u;
    // 0x153b44: 0x0  nop
    ctx->pc = 0x153b44u;
    // NOP
    ctx->pc = 0x153b48u;
}
