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

// Function: entry_001c3330
// Address: 0x1c3330 - 0x1c33ac
void entry_001c3330_0x1c3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3330_0x1c3330");
#endif

    ctx->pc = 0x1c3330u;

    // 0x1c3330: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x1c3330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1c3334: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1c3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1c3338: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1c3338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1c333c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1c333cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x1c3340: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1c3344: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x1c3344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1c3348: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1c3348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1c334c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1c334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1c3350: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1c3350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1c3354: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x1c3354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1c3358: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c335c: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x1c335cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x1c3360: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x1c3360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x1c3364: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x1c3364u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x1c3368: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c3368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c336c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c3370: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c3370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c3374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3378: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1c3378u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c337c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3380: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c3380u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3384: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c3384u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3388: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c3388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c338c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c338cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3390: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c3390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3394: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c3394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3398: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c3398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c339c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c339cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c33a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1c33a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1c33a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C33A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33A4u;
        // 0x1c33a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C33A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C33ACu;
}
