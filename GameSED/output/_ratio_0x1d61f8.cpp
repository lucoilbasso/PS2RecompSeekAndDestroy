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

// Function: _ratio
// Address: 0x1d61f8 - 0x1d62c4
void _ratio_0x1d61f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ratio_0x1d61f8");
#endif

    switch (ctx->pc) {
        case 0x1d621cu: goto label_1d621c;
        case 0x1d622cu: goto label_1d622c;
        case 0x1d62acu: goto label_1d62ac;
        default: break;
    }

    ctx->pc = 0x1d61f8u;

    // 0x1d61f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d61f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d61fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d61fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d6200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d6204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6208: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d6208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d620c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d6210: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d6210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d6214: 0xc0757b6  jal         func_1D5ED8
    ctx->pc = 0x1D6214u;
    SET_GPR_U32(ctx, 31, 0x1D621Cu);
    ctx->pc = 0x1D6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6214u;
    // 0x1d6218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5ED8u, 0x1D6214u, 0x1D621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D621Cu;
label_1d621c:
    // 0x1d621c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1d621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1d6220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6224: 0xc0757b6  jal         func_1D5ED8
    ctx->pc = 0x1D6224u;
    SET_GPR_U32(ctx, 31, 0x1D622Cu);
    ctx->pc = 0x1D6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6224u;
    // 0x1d6228: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5ED8u, 0x1D6224u, 0x1D622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D622Cu;
label_1d622c:
    // 0x1d622c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d6230: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d6230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6234: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1d6234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d6238: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x1d6238u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1d623c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d6240: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x1d6240u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1d6244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6248: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d6248u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d624c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d6250: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6258: 0x22500  sll         $a0, $v0, 20
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1d625c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1d625cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6260: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d6260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d6264: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1d6264u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d6268: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6268u;
    {
        const bool branch_taken_0x1d6268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6268u;
        // 0x1d626c: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6268) {
            ctx->pc = 0x1D6288u;
            goto label_1d6288;
        }
    }
    ctx->pc = 0x1D6270u;
    // 0x1d6270: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d6270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6274: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d6274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d6278: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x1d6278u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1d627c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D627Cu;
    {
        const bool branch_taken_0x1d627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D627Cu;
        // 0x1d6280: 0x2459025  or          $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d627c) {
            ctx->pc = 0x1D629Cu;
            goto label_1d629c;
        }
    }
    ctx->pc = 0x1D6284u;
    // 0x1d6284: 0x0  nop
    ctx->pc = 0x1d6284u;
    // NOP
label_1d6288:
    // 0x1d6288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d628c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d6290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d6290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6294: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1d6294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1d6298: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_1d629c:
    // 0x1d629c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62a0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1d62a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62a4: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D62A4u;
    SET_GPR_U32(ctx, 31, 0x1D62ACu);
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D62A4u, 0x1D62ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62ACu;
label_1d62ac:
    // 0x1d62ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d62acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d62b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d62b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d62b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d62b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d62b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d62b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d62bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D62BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62BCu;
        // 0x1d62c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D62BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D62C4u;
}
