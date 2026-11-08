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

// Function: entry_00136ed0
// Address: 0x136ed0 - 0x136ef0
void entry_00136ed0_0x136ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ed0_0x136ed0");
#endif

    switch (ctx->pc) {
        case 0x136ee8u: goto label_136ee8;
        default: break;
    }

    ctx->pc = 0x136ed0u;

    // 0x136ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ed4: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136ED4u;
    {
        const bool branch_taken_0x136ed4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x136ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED4u;
        // 0x136ed8: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ed4) {
            ctx->pc = 0x136EF0u;
            return;
        }
    }
    ctx->pc = 0x136EDCu;
    // 0x136edc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x136edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136ee0: 0xc067a02  jal         func_19E808
    ctx->pc = 0x136EE0u;
    SET_GPR_U32(ctx, 31, 0x136EE8u);
    ctx->pc = 0x136EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EE0u;
    // 0x136ee4: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x136EE0u, 0x136EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EE8u;
label_136ee8:
    // 0x136ee8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x136EE8u;
    {
        const bool branch_taken_0x136ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EE8u;
        // 0x136eec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ee8) {
            ctx->pc = 0x136F28u;
            return;
        }
    }
    ctx->pc = 0x136EF0u;
}
