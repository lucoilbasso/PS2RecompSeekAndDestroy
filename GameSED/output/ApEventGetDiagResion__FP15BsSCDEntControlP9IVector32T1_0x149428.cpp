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

// Function: ApEventGetDiagResion__FP15BsSCDEntControlP9IVector32T1
// Address: 0x149428 - 0x149528
void ApEventGetDiagResion__FP15BsSCDEntControlP9IVector32T1_0x149428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventGetDiagResion__FP15BsSCDEntControlP9IVector32T1_0x149428");
#endif

    switch (ctx->pc) {
        case 0x149454u: goto label_149454;
        case 0x149468u: goto label_149468;
        case 0x149510u: goto label_149510;
        default: break;
    }

    ctx->pc = 0x149428u;

    // 0x149428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14942c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149430: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x149438: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x149438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14943c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x149440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x149440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149444: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x149444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x149448: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x149448u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x14944c: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x14944Cu;
    SET_GPR_U32(ctx, 31, 0x149454u);
    ctx->pc = 0x149450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14944Cu;
    // 0x149450: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x14944Cu, 0x149454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149454u;
label_149454:
    // 0x149454: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x149454u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x149458: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14945c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149460: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x149460u;
    SET_GPR_U32(ctx, 31, 0x149468u);
    ctx->pc = 0x149464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149460u;
    // 0x149464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x149460u, 0x149468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149468u;
label_149468:
    // 0x149468: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x149468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14946c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149470: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x149470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x149474: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149474u;
    {
        const bool branch_taken_0x149474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149474) {
            ctx->pc = 0x149478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149474u;
            // 0x149478: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149488u;
            goto label_149488;
        }
    }
    ctx->pc = 0x14947Cu;
    // 0x14947c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14947cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x149480: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x149480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x149484: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x149484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_149488:
    // 0x149488: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x149488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14948c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x14948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x149490: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149490u;
    {
        const bool branch_taken_0x149490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149490) {
            ctx->pc = 0x149494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149490u;
            // 0x149494: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494A4u;
            goto label_1494a4;
        }
    }
    ctx->pc = 0x149498u;
    // 0x149498: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x149498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14949c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x14949cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1494a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1494a4:
    // 0x1494a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1494a8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1494a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1494ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1494ACu;
    {
        const bool branch_taken_0x1494ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494ac) {
            ctx->pc = 0x1494B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494ACu;
            // 0x1494b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494C0u;
            goto label_1494c0;
        }
    }
    ctx->pc = 0x1494B4u;
    // 0x1494b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1494b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1494b8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x1494b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x1494bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1494c0:
    // 0x1494c0: 0x2842ffc0  slti        $v0, $v0, -0x40
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x1494c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1494C4u;
    {
        const bool branch_taken_0x1494c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1494c4) {
            ctx->pc = 0x1494C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494C4u;
            // 0x1494c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149500u;
            goto label_149500;
        }
    }
    ctx->pc = 0x1494CCu;
    // 0x1494cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1494ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1494d0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1494d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1494d4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1494D4u;
    {
        const bool branch_taken_0x1494d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494d4) {
            ctx->pc = 0x1494D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494D4u;
            // 0x1494d8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149500u;
            goto label_149500;
        }
    }
    ctx->pc = 0x1494DCu;
    // 0x1494dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1494dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1494e0: 0x2842ffc0  slti        $v0, $v0, -0x40
    ctx->pc = 0x1494e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x1494e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1494E4u;
    {
        const bool branch_taken_0x1494e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1494e4) {
            ctx->pc = 0x1494E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494E4u;
            // 0x1494e8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149500u;
            goto label_149500;
        }
    }
    ctx->pc = 0x1494ECu;
    // 0x1494ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1494f0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1494f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1494f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1494F4u;
    {
        const bool branch_taken_0x1494f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1494F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494F4u;
        // 0x1494f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494f4) {
            ctx->pc = 0x149514u;
            goto label_149514;
        }
    }
    ctx->pc = 0x1494FCu;
    // 0x1494fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1494fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_149500:
    // 0x149500: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x149504: 0x24a56b50  addiu       $a1, $a1, 0x6B50
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27472));
    // 0x149508: 0xc068186  jal         func_1A0618
    ctx->pc = 0x149508u;
    SET_GPR_U32(ctx, 31, 0x149510u);
    ctx->pc = 0x14950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149508u;
    // 0x14950c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x149508u, 0x149510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149510u;
label_149510:
    // 0x149510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149514:
    // 0x149514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x149518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14951c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14951cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149520: 0x3e00008  jr          $ra
    ctx->pc = 0x149520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149520u;
        // 0x149524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149528u;
}
