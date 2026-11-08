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

// Function: Cmd_GET_PARTS_ID_Entry__FP15BsSCDEntControl
// Address: 0x1191e0 - 0x119258
void Cmd_GET_PARTS_ID_Entry__FP15BsSCDEntControl_0x1191e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_PARTS_ID_Entry__FP15BsSCDEntControl_0x1191e0");
#endif

    switch (ctx->pc) {
        case 0x1191f8u: goto label_1191f8;
        case 0x11921cu: goto label_11921c;
        default: break;
    }

    ctx->pc = 0x1191e0u;

    // 0x1191e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1191e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1191e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1191e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1191e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1191e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1191ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1191ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1191f0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1191F0u;
    SET_GPR_U32(ctx, 31, 0x1191F8u);
    ctx->pc = 0x1191F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1191F0u;
    // 0x1191f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1191F0u, 0x1191F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1191F8u;
label_1191f8:
    // 0x1191f8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1191f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1191fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1191fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119200: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x119200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x119204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119208: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x119208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11920c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11920Cu;
    {
        const bool branch_taken_0x11920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x119210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11920Cu;
        // 0x119210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11920c) {
            ctx->pc = 0x119220u;
            goto label_119220;
        }
    }
    ctx->pc = 0x119214u;
    // 0x119214: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x119214u;
    SET_GPR_U32(ctx, 31, 0x11921Cu);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x119214u, 0x11921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11921Cu;
label_11921c:
    // 0x11921c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11921cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119220:
    // 0x119220: 0x24021268  addiu       $v0, $zero, 0x1268
    ctx->pc = 0x119220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x119224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119228: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x119228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11922c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119230: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x119230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x119234: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x119234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11923c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11923cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119240: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119248: 0x8463d530  lh          $v1, -0x2AD0($v1)
    ctx->pc = 0x119248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956336)));
    // 0x11924c: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x11924cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x119250: 0x3e00008  jr          $ra
    ctx->pc = 0x119250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119250u;
        // 0x119254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119258u;
}
