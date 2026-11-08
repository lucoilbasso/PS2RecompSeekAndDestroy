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

// Function: TankGunUpDown__7ApcTankib
// Address: 0x1558f0 - 0x155998
void TankGunUpDown__7ApcTankib_0x1558f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankGunUpDown__7ApcTankib_0x1558f0");
#endif

    switch (ctx->pc) {
        case 0x155950u: goto label_155950;
        case 0x155980u: goto label_155980;
        default: break;
    }

    ctx->pc = 0x1558f0u;

    // 0x1558f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1558f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1558f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1558f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1558f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1558fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155900: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x155900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155904: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x155908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15590c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x15590Cu;
    {
        const bool branch_taken_0x15590c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x155910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15590Cu;
        // 0x155910: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15590c) {
            ctx->pc = 0x155948u;
            goto label_155948;
        }
    }
    ctx->pc = 0x155914u;
    // 0x155914: 0x8e450310  lw          $a1, 0x310($s2)
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
    // 0x155918: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x15591c: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x15591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x155920: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x155920u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x155924: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x155924u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x155928: 0x8e440690  lw          $a0, 0x690($s2)
    ctx->pc = 0x155928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x15592c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15592cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155938: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x155938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15593c: 0x80585a2  j           func_161688
    ctx->pc = 0x15593Cu;
    ctx->pc = 0x155940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15593Cu;
    // 0x155940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161688u;
    UpDownGunDirection__9ApcCqtanki_0x161688(rdram, ctx, runtime); return;
    ctx->pc = 0x155944u;
    // 0x155944: 0x0  nop
    ctx->pc = 0x155944u;
    // NOP
label_155948:
    // 0x155948: 0xc05929a  jal         func_164A68
    ctx->pc = 0x155948u;
    SET_GPR_U32(ctx, 31, 0x155950u);
    ctx->pc = 0x15594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155948u;
    // 0x15594c: 0x8e440690  lw          $a0, 0x690($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x155948u, 0x155950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155950u;
label_155950:
    // 0x155950: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x155950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x155954: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x155958: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x155958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x15595c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15595Cu;
    {
        const bool branch_taken_0x15595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15595c) {
            ctx->pc = 0x155960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15595Cu;
            // 0x155960: 0x8e460310  lw          $a2, 0x310($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155970u;
            goto label_155970;
        }
    }
    ctx->pc = 0x155964u;
    // 0x155964: 0x721110c8  pmaxw       $v0, $s0, $s1
    ctx->pc = 0x155964u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 17)));
    // 0x155968: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15596c: 0x8e460310  lw          $a2, 0x310($s2)
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
label_155970:
    // 0x155970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155974: 0x8e440690  lw          $a0, 0x690($s2)
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x155978: 0xc0585d0  jal         func_161740
    ctx->pc = 0x155978u;
    SET_GPR_U32(ctx, 31, 0x155980u);
    ctx->pc = 0x15597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155978u;
    // 0x15597c: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x155978u, 0x155980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155980u;
label_155980:
    // 0x155980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15598c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155990: 0x3e00008  jr          $ra
    ctx->pc = 0x155990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155990u;
        // 0x155994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155998u;
}
