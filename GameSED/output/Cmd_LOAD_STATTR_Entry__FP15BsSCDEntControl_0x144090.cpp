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

// Function: Cmd_LOAD_STATTR_Entry__FP15BsSCDEntControl
// Address: 0x144090 - 0x144174
void Cmd_LOAD_STATTR_Entry__FP15BsSCDEntControl_0x144090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_STATTR_Entry__FP15BsSCDEntControl_0x144090");
#endif

    switch (ctx->pc) {
        case 0x1440a8u: goto label_1440a8;
        case 0x144114u: goto label_144114;
        case 0x144124u: goto label_144124;
        case 0x144138u: goto label_144138;
        case 0x144150u: goto label_144150;
        default: break;
    }

    ctx->pc = 0x144090u;

    // 0x144090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14409c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1440a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1440A0u;
    SET_GPR_U32(ctx, 31, 0x1440A8u);
    ctx->pc = 0x1440A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440A0u;
    // 0x1440a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1440A0u, 0x1440A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440A8u;
label_1440a8:
    // 0x1440a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1440a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1440b0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1440B0u;
    {
        const bool branch_taken_0x1440b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1440B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440B0u;
        // 0x1440b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440b0) {
            ctx->pc = 0x144108u;
            goto label_144108;
        }
    }
    ctx->pc = 0x1440B8u;
    // 0x1440b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1440B8u;
    {
        const bool branch_taken_0x1440b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440b8) {
            ctx->pc = 0x1440BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1440B8u;
            // 0x1440bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1440D0u;
            goto label_1440d0;
        }
    }
    ctx->pc = 0x1440C0u;
    // 0x1440c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1440C0u;
    {
        const bool branch_taken_0x1440c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440C0u;
        // 0x1440c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440c0) {
            ctx->pc = 0x1440E8u;
            goto label_1440e8;
        }
    }
    ctx->pc = 0x1440C8u;
    // 0x1440c8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1440C8u;
    {
        const bool branch_taken_0x1440c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440C8u;
        // 0x1440cc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440c8) {
            ctx->pc = 0x144168u;
            goto label_144168;
        }
    }
    ctx->pc = 0x1440D0u;
label_1440d0:
    // 0x1440d0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1440D0u;
    {
        const bool branch_taken_0x1440d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1440D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440D0u;
        // 0x1440d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440d0) {
            ctx->pc = 0x144130u;
            goto label_144130;
        }
    }
    ctx->pc = 0x1440D8u;
    // 0x1440d8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1440D8u;
    {
        const bool branch_taken_0x1440d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1440DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440D8u;
        // 0x1440dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440d8) {
            ctx->pc = 0x144148u;
            goto label_144148;
        }
    }
    ctx->pc = 0x1440E0u;
    // 0x1440e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1440E0u;
    {
        const bool branch_taken_0x1440e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440E0u;
        // 0x1440e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440e0) {
            ctx->pc = 0x144164u;
            goto label_144164;
        }
    }
    ctx->pc = 0x1440E8u;
label_1440e8:
    // 0x1440e8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1440e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1440ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1440ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1440f0: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x1440f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x1440f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1440f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x262680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262680u, _value); } while (0);
    // 0x1440f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1440f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262688u, _value); } while (0);
    // 0x1440fc: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x1440fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262684u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x262684u, _value); } while (0);
    // 0x144100: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x144100u;
    {
        const bool branch_taken_0x144100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144100u;
        // 0x144104: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144100) {
            ctx->pc = 0x144160u;
            goto label_144160;
        }
    }
    ctx->pc = 0x144108u;
label_144108:
    // 0x144108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14410c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14410Cu;
    SET_GPR_U32(ctx, 31, 0x144114u);
    ctx->pc = 0x144110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14410Cu;
    // 0x144110: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14410Cu, 0x144114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144114u;
label_144114:
    // 0x144114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144118: 0x26102680  addiu       $s0, $s0, 0x2680
    ctx->pc = 0x144118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9856));
    // 0x14411c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14411Cu;
    SET_GPR_U32(ctx, 31, 0x144124u);
    ctx->pc = 0x144120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14411Cu;
    // 0x144120: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14411Cu, 0x144124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144124u;
label_144124:
    // 0x144124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x144124u;
    {
        const bool branch_taken_0x144124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144124u;
        // 0x144128: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144124) {
            ctx->pc = 0x144160u;
            goto label_144160;
        }
    }
    ctx->pc = 0x14412Cu;
    // 0x14412c: 0x0  nop
    ctx->pc = 0x14412cu;
    // NOP
label_144130:
    // 0x144130: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144130u;
    SET_GPR_U32(ctx, 31, 0x144138u);
    ctx->pc = 0x144134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144130u;
    // 0x144134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144130u, 0x144138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144138u;
label_144138:
    // 0x144138: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x14413c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14413Cu;
    {
        const bool branch_taken_0x14413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14413Cu;
        // 0x144140: 0xac622680  sw          $v0, 0x2680($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 9856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14413c) {
            ctx->pc = 0x144160u;
            goto label_144160;
        }
    }
    ctx->pc = 0x144144u;
    // 0x144144: 0x0  nop
    ctx->pc = 0x144144u;
    // NOP
label_144148:
    // 0x144148: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144148u;
    SET_GPR_U32(ctx, 31, 0x144150u);
    ctx->pc = 0x14414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144148u;
    // 0x14414c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144148u, 0x144150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144150u;
label_144150:
    // 0x144150: 0x26102680  addiu       $s0, $s0, 0x2680
    ctx->pc = 0x144150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9856));
    // 0x144154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14415c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x14415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_144160:
    // 0x144160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144164:
    // 0x144164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_144168:
    // 0x144168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14416c: 0x3e00008  jr          $ra
    ctx->pc = 0x14416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14416Cu;
        // 0x144170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144174u;
}
