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

// Function: entry_001a5098
// Address: 0x1a5098 - 0x1a5110
void entry_001a5098_0x1a5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5098_0x1a5098");
#endif

    switch (ctx->pc) {
        case 0x1a5108u: goto label_1a5108;
        default: break;
    }

    ctx->pc = 0x1a5098u;

label_1a5098:
    // 0x1a5098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a509c:
    // 0x1a509c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a50a0:
    // 0x1a50a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a50a4:
    // 0x1a50a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a50a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a50a8:
    // 0x1a50a8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a50ac:
    // 0x1a50ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a50b0:
    // 0x1a50b0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a50b4:
    // 0x1a50b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a50b8:
    // 0x1a50b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a50bc:
    // 0x1a50bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a50bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a50c0:
    // 0x1a50c0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1a50c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1a50c4:
    // 0x1a50c4: 0xc4e30020  lwc1        $f3, 0x20($a3)
    ctx->pc = 0x1a50c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a50c8:
    // 0x1a50c8: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x1a50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
label_1a50cc:
    // 0x1a50cc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1a50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1a50d0:
    // 0x1a50d0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a50d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a50d4:
    // 0x1a50d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a50d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a50d8:
    // 0x1a50d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a50dc:
    // 0x1a50dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a50e0:
    // 0x1a50e0: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a50e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
label_1a50e4:
    // 0x1a50e4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1a50e8:
    // 0x1a50e8: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a50ec:
    // 0x1a50ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a50ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1a50f0:
    // 0x1a50f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a50f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a50f4:
    // 0x1a50f4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a50f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1a50f8:
    // 0x1a50f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a50fc:
    if (ctx->pc == 0x1A50FCu) {
        ctx->pc = 0x1A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50F8u;
        // 0x1a50fc: 0x46030b00  add.s       $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5100u;
        goto label_1a5100;
    }
    ctx->pc = 0x1A50F8u;
    {
        const bool branch_taken_0x1a50f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50F8u;
        // 0x1a50fc: 0x46030b00  add.s       $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50f8) {
            ctx->pc = 0x1A5110u;
            return;
        }
    }
    ctx->pc = 0x1A5100u;
label_1a5100:
    // 0x1a5100: 0x60f809  jalr        $v1
label_1a5104:
    if (ctx->pc == 0x1A5104u) {
        ctx->pc = 0x1A5108u;
        goto label_1a5108;
    }
    ctx->pc = 0x1A5100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5108u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5100u, 0x1A5108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5108u;
label_1a5108:
    // 0x1a5108: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a510c:
    if (ctx->pc == 0x1A510Cu) {
        ctx->pc = 0x1A510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5108u;
        // 0x1a510c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5110u;
        goto label_fallthrough_0x1a5108;
    }
    ctx->pc = 0x1A5108u;
    {
        const bool branch_taken_0x1a5108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5108u;
        // 0x1a510c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5108) {
            ctx->pc = 0x1A5140u;
            return;
        }
    }
label_fallthrough_0x1a5108:
    ctx->pc = 0x1A5110u;
}
