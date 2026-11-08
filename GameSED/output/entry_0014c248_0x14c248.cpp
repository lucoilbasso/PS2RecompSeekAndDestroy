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

// Function: entry_0014c248
// Address: 0x14c248 - 0x14c2b8
void entry_0014c248_0x14c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c248_0x14c248");
#endif

    ctx->pc = 0x14c248u;

    // 0x14c248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c258: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c25c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x14c25cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14c260: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x14c264: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x14c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14c268: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x14c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x14c26c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14c26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14c270: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x14C270u;
    {
        const bool branch_taken_0x14c270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c270) {
            ctx->pc = 0x14C274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C270u;
            // 0x14c274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C400u;
            return;
        }
    }
    ctx->pc = 0x14C278u;
    // 0x14c278: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14c27c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x14c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14c280: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x14C280u;
    {
        const bool branch_taken_0x14c280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c280) {
            ctx->pc = 0x14C284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C280u;
            // 0x14c284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C400u;
            return;
        }
    }
    ctx->pc = 0x14C288u;
    // 0x14c288: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14c28c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14C28Cu;
    {
        const bool branch_taken_0x14c28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c28c) {
            ctx->pc = 0x14C290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C28Cu;
            // 0x14c290: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C2BCu;
            return;
        }
    }
    ctx->pc = 0x14C294u;
    // 0x14c294: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x14c298: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C298u;
    {
        const bool branch_taken_0x14c298 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14c298) {
            ctx->pc = 0x14C29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C298u;
            // 0x14c29c: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C2BCu;
            return;
        }
    }
    ctx->pc = 0x14C2A0u;
    // 0x14c2a0: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x14c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x14c2a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C2A4u;
    {
        const bool branch_taken_0x14c2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2A4u;
        // 0x14c2a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2a4) {
            ctx->pc = 0x14C2B8u;
            return;
        }
    }
    ctx->pc = 0x14C2ACu;
    // 0x14c2ac: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x14c2b0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14C2B0u;
    SET_GPR_U32(ctx, 31, 0x14C2B8u);
    ctx->pc = 0x14C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2B0u;
    // 0x14c2b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14C2B0u, 0x14C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2B8u;
}
