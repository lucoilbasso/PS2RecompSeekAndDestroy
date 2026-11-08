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

// Function: WRscCreate__Fi
// Address: 0x17a1f0 - 0x17a254
void WRscCreate__Fi_0x17a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WRscCreate__Fi_0x17a1f0");
#endif

    switch (ctx->pc) {
        case 0x17a20cu: goto label_17a20c;
        case 0x17a214u: goto label_17a214;
        case 0x17a230u: goto label_17a230;
        case 0x17a23cu: goto label_17a23c;
        default: break;
    }

    ctx->pc = 0x17a1f0u;

    // 0x17a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a1f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a1f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a204: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17A204u;
    SET_GPR_U32(ctx, 31, 0x17A20Cu);
    ctx->pc = 0x17A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A204u;
    // 0x17a208: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17A204u, 0x17A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A20Cu;
label_17a20c:
    // 0x17a20c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17A20Cu;
    SET_GPR_U32(ctx, 31, 0x17A214u);
    ctx->pc = 0x17A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A20Cu;
    // 0x17a210: 0x24040168  addiu       $a0, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17A20Cu, 0x17A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A214u;
label_17a214:
    // 0x17a214: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a21c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17a220: 0x2442fa20  addiu       $v0, $v0, -0x5E0
    ctx->pc = 0x17a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965792));
    // 0x17a224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a228: 0xc05e896  jal         func_17A258
    ctx->pc = 0x17A228u;
    SET_GPR_U32(ctx, 31, 0x17A230u);
    ctx->pc = 0x17A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A228u;
    // 0x17a22c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x17A228u, 0x17A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A230u;
label_17a230:
    // 0x17a230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a234: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17A234u;
    SET_GPR_U32(ctx, 31, 0x17A23Cu);
    ctx->pc = 0x17A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A234u;
    // 0x17a238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17A234u, 0x17A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A23Cu;
label_17a23c:
    // 0x17a23c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a24c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A24Cu;
        // 0x17a250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A254u;
}
