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

// Function: entry_001346e4
// Address: 0x1346e4 - 0x134738
void entry_001346e4_0x1346e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001346e4_0x1346e4");
#endif

    switch (ctx->pc) {
        case 0x13471cu: goto label_13471c;
        default: break;
    }

    ctx->pc = 0x1346e4u;

    // 0x1346e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1346e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1346e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1346e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1346ec: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1346ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1346f0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1346f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1346f4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1346f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1346f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1346f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1346fc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1346fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x134700: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x134700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134704: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x134704u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x134708: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13470c: 0x1054000a  beq         $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x13470Cu;
    {
        const bool branch_taken_0x13470c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x134710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13470Cu;
        // 0x134710: 0x8f918a30  lw          $s1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13470c) {
            ctx->pc = 0x134738u;
            return;
        }
    }
    ctx->pc = 0x134714u;
    // 0x134714: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134714u;
    SET_GPR_U32(ctx, 31, 0x13471Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134714u, 0x13471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13471Cu;
label_13471c:
    // 0x13471c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13471cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134720: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134724: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134728: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x134728u;
    {
        const bool branch_taken_0x134728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x134728) {
            ctx->pc = 0x13472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134728u;
            // 0x13472c: 0xae510230  sw          $s1, 0x230($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13473Cu;
            return;
        }
    }
    ctx->pc = 0x134730u;
    // 0x134730: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134730u;
    SET_GPR_U32(ctx, 31, 0x134738u);
    ctx->pc = 0x134734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134730u;
    // 0x134734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134730u, 0x134738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134738u;
}
