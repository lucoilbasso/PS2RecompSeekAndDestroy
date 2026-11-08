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

// Function: __pack_f
// Address: 0x1cf3b0 - 0x1cf464
void ps2___pack_f_0x1cf3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x1cf3b0");
#endif

    ctx->pc = 0x1cf3b0u;

    // 0x1cf3b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3b8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf3bc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1cf3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1cf3c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF3C0u;
    {
        const bool branch_taken_0x1cf3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C0u;
        // 0x1cf3c4: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c0) {
            ctx->pc = 0x1CF404u;
            goto label_1cf404;
        }
    }
    ctx->pc = 0x1CF3C8u;
    // 0x1cf3c8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CF3C8u;
    {
        const bool branch_taken_0x1cf3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C8u;
        // 0x1cf3cc: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c8) {
            ctx->pc = 0x1CF418u;
            goto label_1cf418;
        }
    }
    ctx->pc = 0x1CF3D0u;
    // 0x1cf3d0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cf3d4: 0x2882ff82  slti        $v0, $a0, -0x7E
    ctx->pc = 0x1cf3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1cf3d8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF3D8u;
    {
        const bool branch_taken_0x1cf3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf3d8) {
            ctx->pc = 0x1CF3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF3D8u;
            // 0x1cf3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF414u;
            goto label_1cf414;
        }
    }
    ctx->pc = 0x1CF3E0u;
    // 0x1cf3e0: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x1cf3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1cf3e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF3E4u;
    {
        const bool branch_taken_0x1cf3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf3e4) {
            ctx->pc = 0x1CF3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF3E4u;
            // 0x1cf3e8: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF404u;
            goto label_1cf404;
        }
    }
    ctx->pc = 0x1CF3ECu;
    // 0x1cf3ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf3f0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF3F0u;
    {
        const bool branch_taken_0x1cf3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F0u;
        // 0x1cf3f4: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3f0) {
            ctx->pc = 0x1CF410u;
            goto label_1cf410;
        }
    }
    ctx->pc = 0x1CF3F8u;
    // 0x1cf3f8: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF3F8u;
    {
        const bool branch_taken_0x1cf3f8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1cf3f8) {
            ctx->pc = 0x1CF3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF3F8u;
            // 0x1cf3fc: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF414u;
            goto label_1cf414;
        }
    }
    ctx->pc = 0x1CF400u;
    // 0x1cf400: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cf404:
    // 0x1cf404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF414u;
            goto label_1cf414;
        }
    }
    ctx->pc = 0x1CF40Cu;
    // 0x1cf40c: 0x0  nop
    ctx->pc = 0x1cf40cu;
    // NOP
label_1cf410:
    // 0x1cf410: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_1cf414:
    // 0x1cf414: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1cf418:
    // 0x1cf418: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1cf41c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1cf41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cf420: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1cf420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1cf424: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1cf424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1cf428: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x1cf42c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1cf42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1cf430: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1cf434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1cf434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1cf438: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1cf438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cf43c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1cf43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1cf440: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x1cf444: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x1cf448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1cf448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cf44c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1cf44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1cf450: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1cf450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1cf454: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1cf458: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cf458u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf45c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF464u;
}
