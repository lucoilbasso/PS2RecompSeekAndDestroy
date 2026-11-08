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

// Function: entry_0014c2e4
// Address: 0x14c2e4 - 0x14c338
void entry_0014c2e4_0x14c2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c2e4_0x14c2e4");
#endif

    switch (ctx->pc) {
        case 0x14c30cu: goto label_14c30c;
        default: break;
    }

    ctx->pc = 0x14c2e4u;

    // 0x14c2e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14c2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2ec: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x14c2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14c2f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14c2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14c2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c300: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x14c300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14c304: 0xc0514c2  jal         func_145308
    ctx->pc = 0x14C304u;
    SET_GPR_U32(ctx, 31, 0x14C30Cu);
    ctx->pc = 0x14C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C304u;
    // 0x14c308: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x14C304u, 0x14C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C30Cu;
label_14c30c:
    // 0x14c30c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x14c310: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x14c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x14c314: 0x920501ab  lbu         $a1, 0x1AB($s0)
    ctx->pc = 0x14c314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14c318: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2400C4u));
    // 0x14c31c: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x14c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x14c320: 0x8c440418  lw          $a0, 0x418($v0)
    ctx->pc = 0x14c320u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2400C8u));
    // 0x14c324: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C324u;
    {
        const bool branch_taken_0x14c324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C324u;
        // 0x14c328: 0xae040258  sw          $a0, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c324) {
            ctx->pc = 0x14C384u;
            return;
        }
    }
    ctx->pc = 0x14C32Cu;
    // 0x14c32c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14c32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14c330: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14c330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14c334: 0x0  nop
    ctx->pc = 0x14c334u;
    // NOP
    ctx->pc = 0x14c338u;
}
