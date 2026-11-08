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

// Function: entry_0014b8a4
// Address: 0x14b8a4 - 0x14b970
void entry_0014b8a4_0x14b8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b8a4_0x14b8a4");
#endif

    switch (ctx->pc) {
        case 0x14b8d0u: goto label_14b8d0;
        case 0x14b964u: goto label_14b964;
        default: break;
    }

    ctx->pc = 0x14b8a4u;

label_14b8a4:
    // 0x14b8a4: 0x1242004d  beq         $s2, $v0, . + 4 + (0x4D << 2)
label_14b8a8:
    if (ctx->pc == 0x14B8A8u) {
        ctx->pc = 0x14B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8A4u;
        // 0x14b8a8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8ACu;
        goto label_14b8ac;
    }
    ctx->pc = 0x14B8A4u;
    {
        const bool branch_taken_0x14b8a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8A4u;
        // 0x14b8a8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8a4) {
            ctx->pc = 0x14B9DCu;
            return;
        }
    }
    ctx->pc = 0x14B8ACu;
label_14b8ac:
    // 0x14b8ac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_14b8b0:
    // 0x14b8b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14b8b4:
    // 0x14b8b4: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_14b8b8:
    if (ctx->pc == 0x14B8B8u) {
        ctx->pc = 0x14B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8B4u;
        // 0x14b8b8: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8BCu;
        goto label_14b8bc;
    }
    ctx->pc = 0x14B8B4u;
    {
        const bool branch_taken_0x14b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8b4) {
            ctx->pc = 0x14B8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B8B4u;
            // 0x14b8b8: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B970u;
            return;
        }
    }
    ctx->pc = 0x14B8BCu;
label_14b8bc:
    // 0x14b8bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x14b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14b8c0:
    // 0x14b8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b8c4:
    // 0x14b8c4: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x14b8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_14b8c8:
    // 0x14b8c8: 0xc052fa2  jal         func_14BE88
label_14b8cc:
    if (ctx->pc == 0x14B8CCu) {
        ctx->pc = 0x14B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8C8u;
        // 0x14b8cc: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8D0u;
        goto label_14b8d0;
    }
    ctx->pc = 0x14B8C8u;
    SET_GPR_U32(ctx, 31, 0x14B8D0u);
    ctx->pc = 0x14B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8C8u;
    // 0x14b8cc: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x14B8C8u, 0x14B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8D0u;
label_14b8d0:
    // 0x14b8d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14b8d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_14b8d4:
    // 0x14b8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b8d8:
    // 0x14b8d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14b8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b8dc:
    // 0x14b8dc: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_14b8e0:
    if (ctx->pc == 0x14B8E0u) {
        ctx->pc = 0x14B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8DCu;
        // 0x14b8e0: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8E4u;
        goto label_14b8e4;
    }
    ctx->pc = 0x14B8DCu;
    {
        const bool branch_taken_0x14b8dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b8dc) {
            ctx->pc = 0x14B8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B8DCu;
            // 0x14b8e0: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B970u;
            return;
        }
    }
    ctx->pc = 0x14B8E4u;
label_14b8e4:
    // 0x14b8e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_14b8e8:
    // 0x14b8e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14b8ec:
    // 0x14b8ec: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x14b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_14b8f0:
    // 0x14b8f0: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x14b8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_14b8f4:
    // 0x14b8f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14b8f8:
    // 0x14b8f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x14b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_14b8fc:
    // 0x14b8fc: 0x24e50060  addiu       $a1, $a3, 0x60
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_14b900:
    // 0x14b900: 0xa0e60020  sb          $a2, 0x20($a3)
    ctx->pc = 0x14b900u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 6));
label_14b904:
    // 0x14b904: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x14b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_14b908:
    // 0x14b908: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x14b908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_14b90c:
    // 0x14b90c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_14b910:
    // 0x14b910: 0x24e30080  addiu       $v1, $a3, 0x80
    ctx->pc = 0x14b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_14b914:
    // 0x14b914: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x14b914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_14b918:
    // 0x14b918: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14b918u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_14b91c:
    // 0x14b91c: 0xc4e00084  lwc1        $f0, 0x84($a3)
    ctx->pc = 0x14b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b920:
    // 0x14b920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14b924:
    // 0x14b924: 0xace2009c  sw          $v0, 0x9C($a3)
    ctx->pc = 0x14b924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 2));
label_14b928:
    // 0x14b928: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14b928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b92c:
    // 0x14b92c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b930:
    // 0x14b930: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x14b930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
label_14b934:
    // 0x14b934: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x14b934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
label_14b938:
    // 0x14b938: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14b93c:
    // 0x14b93c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14b940:
    // 0x14b940: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14b940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b944:
    // 0x14b944: 0xe4e00084  swc1        $f0, 0x84($a3)
    ctx->pc = 0x14b944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 132), bits); }
label_14b948:
    // 0x14b948: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x14b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_14b94c:
    // 0x14b94c: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x14b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_14b950:
    // 0x14b950: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x14b950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
label_14b954:
    // 0x14b954: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14b958:
    // 0x14b958: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14b95c:
    // 0x14b95c: 0x40f809  jalr        $v0
label_14b960:
    if (ctx->pc == 0x14B960u) {
        ctx->pc = 0x14B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B95Cu;
        // 0x14b960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B964u;
        goto label_14b964;
    }
    ctx->pc = 0x14B95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B964u);
        ctx->pc = 0x14B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B95Cu;
        // 0x14b960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B95Cu, 0x14B964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B964u;
label_14b964:
    // 0x14b964: 0x1000001e  b           . + 4 + (0x1E << 2)
label_14b968:
    if (ctx->pc == 0x14B968u) {
        ctx->pc = 0x14B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B964u;
        // 0x14b968: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B96Cu;
        goto label_14b96c;
    }
    ctx->pc = 0x14B964u;
    {
        const bool branch_taken_0x14b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B964u;
        // 0x14b968: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b964) {
            ctx->pc = 0x14B9E0u;
            return;
        }
    }
    ctx->pc = 0x14B96Cu;
label_14b96c:
    // 0x14b96c: 0x0  nop
    ctx->pc = 0x14b96cu;
    // NOP
    ctx->pc = 0x14b970u;
}
