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

// Function: entry_0013f058
// Address: 0x13f058 - 0x13f0b8
void entry_0013f058_0x13f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f058_0x13f058");
#endif

    switch (ctx->pc) {
        case 0x13f06cu: goto label_13f06c;
        default: break;
    }

    ctx->pc = 0x13f058u;

    // 0x13f058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f05c: 0x24c6ee48  addiu       $a2, $a2, -0x11B8
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962760));
    // 0x13f060: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f064: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13F064u;
    SET_GPR_U32(ctx, 31, 0x13F06Cu);
    ctx->pc = 0x13F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F064u;
    // 0x13f068: 0x240703b0  addiu       $a3, $zero, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13F064u, 0x13F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F06Cu;
label_13f06c:
    // 0x13f06c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13f06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13f070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f074: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13f074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f078: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x13f078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x13f07c: 0xa2100a  movz        $v0, $a1, $v0
    ctx->pc = 0x13f07cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x13f080: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x13f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13f084: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13f084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f088: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13f088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f08c: 0xacd50018  sw          $s5, 0x18($a2)
    ctx->pc = 0x13f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 21));
    // 0x13f090: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x13f090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x13f094: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13F094u;
    {
        const bool branch_taken_0x13f094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F094u;
        // 0x13f098: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f094) {
            ctx->pc = 0x13F0F8u;
            return;
        }
    }
    ctx->pc = 0x13F09Cu;
    // 0x13f09c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x13f0a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F0A4u;
    {
        const bool branch_taken_0x13f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0A4u;
        // 0x13f0a8: 0x24c70030  addiu       $a3, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0a4) {
            ctx->pc = 0x13F0B8u;
            return;
        }
    }
    ctx->pc = 0x13F0ACu;
    // 0x13f0ac: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x13f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x13f0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F0B0u;
    {
        const bool branch_taken_0x13f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0B0u;
        // 0x13f0b4: 0x244300d0  addiu       $v1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0b0) {
            ctx->pc = 0x13F0BCu;
            return;
        }
    }
    ctx->pc = 0x13F0B8u;
}
